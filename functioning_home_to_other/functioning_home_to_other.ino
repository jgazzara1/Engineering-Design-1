#include <ArduinoInit.h>
#include <SendOnlySoftwareSerial.h>

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
