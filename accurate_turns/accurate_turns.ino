#include<ArduinoInit.h>
#include<SendOnlySoftwareSerial.h>
void setup() {
  // put your setup code here, to run once:
configArduino();
}

void loop() {
//accurate 90 degree turn left 
motors('1','A',35);
motors('2','B',35);
pause(700);

//accurate 90 degree turn right
motors('2','A',35);
motors('1','B',35);
pause(700);

//accurate 180 degree turn left 
motors('1','A',35);
motors('2','B',35);
pause(1000);

//accurate 180 degree turn right
motors('2','A',35);
motors('1','B',35);
pause(1000);

//accurate 360 degree turn left 
motors('1','A',35);
motors('2','B',35);
pause(1400);

//accurate 360 degree turn right
motors('2','A',35);
motors('1','B',35);
pause(1400);

}
