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
            backwards(400,50);
            right(100,50); //subroutine
              
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
          backwards(400,50);
          left(100,50);        //subroutine
          
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
  motors('b','o', 0);
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
              if (readADC(2) < 15000)
              {
                forwards(10,50);
              }
              else                  //rotate and move at highest number
              {
                forwards(30,50);
                left(50,50);
              }
              
  }
  else{
        //go towards light sensor
              if (readADC(4) < 7000)
              {
                right(10,90);
                forwards(10,90);
              }
              else if (readADC(5) < 7000)
              {
                left(10,90);
                forwards(10,90);
              }
             else if(readADC(5) < 7000 && readADC(4) < 7000)
             {
              forwards(10,90);
             }
             else
             {
               forwards(10,90);
             }
            
      }
  
}
