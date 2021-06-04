#include <ArduinoInit.h> 
#include <SendOnlySoftwareSerial.h>

 


void testSensor(int number){

 unsigned int sensor0 = readADC(number);    
  Serial.print ("Sensor "); 
  Serial.println (number);
  Serial.println (sensor0);  
  pause (400);
}

void setup() {
 configArduino ( );

}

void loop() {
  testSensor(1);
  testSensor(2);
  testSensor(3);
  testSensor(4);
  testSensor(5);

}
