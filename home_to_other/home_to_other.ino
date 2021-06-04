#include <ArduinoInit.h>
#include <SendOnlySoftwareSerial.h>



void setup() {
   configArduino ( );

   

}

void loop() {

 //this code makes the list of readings
  outputHigh(4);
  pause(500);
  sensor3 = readADC (3); 
  Serial.print ("Floor Sensor  "); 
  Serial.println (sensor3); 
  pause (500);  

 //this code shows if home or away and makes it move until it finds it
      if ( sensor3 < 13000)
        {

         void search
          startingSide = 0;
            outputHigh(12);
            pause(1000);
            outputLow(12);
            motors('1','A',50);
            motors('2','B',50);
            pause(2000);
            
            if ( sensor3 > 13000)
              {
                motors('B','O',50);
                pause (4000);
              }
            else
            {
              
            }


              
         }
      else
        {
          startingSide = 1;
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

   else if (sensor3 > 13000)
   {
      void search
          startingSide = 0;
            outputHigh(12);
            pause(1000);
            outputLow(12);
            motors('1','A',50);
            motors('2','B',50);
            pause(2000);
            
          if ( sensor3 > 13000)
          {
                motors('B','O',50);
                pause (4000);
          }
          else
          {
              
          }    
   }
    else
        {
          startingSide = 1;
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

}
