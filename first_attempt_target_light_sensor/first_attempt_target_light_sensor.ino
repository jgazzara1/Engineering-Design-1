#include <ArduinoInit.h>
#include <SendOnlySoftwareSerial.h>

//this is the left bumper interrupt
  void bumpInterrupt0 ()  
    {
        pause(5); 

        if (readInput(2) == 1) return; 

        halt(10);          //subroutine  

        while (readInput(2) == 0) 
        {
            right(10,50); //subroutine
              
        } return;
     }   

//this is the right bumper interrupt 
    void bumpInterrupt1 ()  
    {
        pause(5);

        if (readInput(3) == 1) return; 

        halt(10);   //subroutine
        
        while (readInput(3) == 0) 
        {
          left(10,50);        //subroutine
          
        } return;
     }  

//this is for both bumpers 
void bumpInterrupt3 ()  
    {
        pause(5);

        if (readInput(3) == 1) return; 

        halt(10);       //subroutine
         
        while (readInput(3) == 0) 
        {
          left(20,50);      //subroutine
          
        } return;
     } 

int startingSide; 

int checkFSM(){
  if (readADC(3) < 13000)
    {
      return 1;
    }
  else
    {
      return 2;
    }
}

void forwards(int duration, int velocity)
{
  motors('b', 'a', velocity);
  pause(duration);
}

void backwards(int duration, int velocity)
{
  motors('b', 'b', velocity);
  pause(duration);
}
void left(int duration, int velocity)
{
  motors (1,'b',velocity);
  motors (2,'a',velocity);
  pause(duration);
}

void right(int duration, int velocity)
{
  motors(1,'a',velocity);
  motors(2,'b',velocity);
  pause(duration);
}

void halt(int duration)
{
  motors('b', 0, 0);
  pause(duration);
}

void setup ( ) 
{
  configArduino ( );
  outputHigh(4); //turns sensor light on
  pause(10);
  attachInterrupt (0,bumpInterrupt0,LOW);
  attachInterrupt (1,bumpInterrupt1, LOW);
  startingSide = checkFSM();
}

void loop ( )
{
  if (checkFSM() == startingSide){
         //go towards homing beacon
              if (readADC(2) < //some number);
              {
                forwards(10,50);
              }
              
              else;                   //rotate and move at highest number
              {
                left(10,50);     //pause 10 may be too fast
              }
              
  }
  
  else{
        //go towards light sensor
              if (readADC(4) > readADC(5));
              {
                lefts(10,50);
              }
              
              else;
              {
                right(10,50);
              }    
      }
  
}
