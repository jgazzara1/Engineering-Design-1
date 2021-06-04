#include <ArduinoInit.h>
#include <SendOnlySoftwareSerial.h>

int startingSide = 2;
unsigned int sensor3 = 3;  

void setup ( ) 
{
  configArduino ( );
}

void loop ( )
{

 //this code shows if home or away and makes it move until it finds it
      if ( sensor3 < 13000)
        {
            outputHigh(12);
            pause(1000);
            outputLow(12);
            motors('1','A',50);
            motors('2','B',50);
            pause(2000);
            motors('B','O',50);
            pause (4000);
         }
      else 
        {
          outputHigh(10);
          pause(1000);
          outputLow(10);
          motors('B','A',0);
          pause(500);
          motors('B','O',50);
          pause(500);
          motors('B','A',0);
          pause(500);
          motors('B','O',50);
          pause(500);
          
        }
        
}


