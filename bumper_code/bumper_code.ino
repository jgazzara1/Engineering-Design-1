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

void setup() 
{
        //this is a required thing
       configArduino ();
       //this is required interruopt stuff
       attachInterrupt (0,bumpInterrupt0,LOW);
       attachInterrupt (1,bumpInterrupt1, LOW);
}

void loop() 
{
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


