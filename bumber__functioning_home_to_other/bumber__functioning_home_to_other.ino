#include <ArduinoInit.h>
#include <SendOnlySoftwareSerial.h>

//this is the left bumper interrupt
  void bumpInterrupt0 ()  
    {
        pause(5); 

        if (readInput(2) == 1) return; 

        motors ('b', 'o', 0); 
        pause (200);  

        while (readInput(2) == 0) 
        {
            motors (1,'a',50);
            motors (2,'b',50);
            pause(200);
            
        } return;
     }   

//this is the right bumper interrupt 
    void bumpInterrupt1 ()  
    {
        pause(5);

        if (readInput(3) == 1) return; 

        motors ('b', 'o', 0); 
        pause (200);  

        while (readInput(3) == 0) 
        {
          motors (1,'b',50);
          motors (2,'a',50);
          pause(200);
          
        } return;
     }  

//this is for both bumpers 
void bumpInterrupt3 ()  
    {
        pause(5);

        if (readInput(3) == 1) return; 

        motors ('b', 'o', 0); 
        pause (200);  

        while (readInput(3) == 0) 
        {
          motors (1,'b',50);
          motors (2,'a',50);
          pause(200);
          
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

void forward(int duration, int vel){
  motors('b', 'a', vel);
  pause(duration);
}

void setup ( ) 
{
  configArduino ( );
  outputHigh(4); //turns sensor light on
  pause(100);
  attachInterrupt (0,bumpInterrupt0,LOW);
  attachInterrupt (1,bumpInterrupt1, LOW);
  startingSide = checkFSM();
}

void loop ( )
{
  if (checkFSM() == startingSide){
  //pulse seek
              outputHigh(10);
              outputLow(12);
              motors('B','A',0);
              pause(500);
              motors('B','O',50);
              pause(500);
              motors('B','A',0);
              pause(500);
              motors('B','O',50);
              pause(500);
  }
  
  else{
        //spinny
              outputHigh(12);
              outputLow(10);
              motors('1','A',50);
              motors('2','B',50);
              pause(2000);
              motors('B','O',50);
              pause (4000);
   
  }
  
   
  
 
}
