#include<ArduinoInit.h>
#include<SendOnlySoftwareSerial.h>

void setup(){  

configArduino();
}
//green on, both off, red on, both off
void loop() {
outputHigh(12);
pause(1000);
outputLow(12);
pause(1000);
outputHigh(10);
pause(1000);
outputLow(10);
pause(1000);

pause(2000);

//go for 2 seconds, stop for 2 seconds
motors('b','A',35);
pause(2000);
motors('b','o',0);
pause(2000);

pause(2000);

//turn right
motors('2','A',35);
motors('1','B',35);

pause(2000);


}
