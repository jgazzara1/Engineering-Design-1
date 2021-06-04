#include<ArduinoInit.h>
#include<SendOnlySoftwareSerial.h>
void setup() {
  // put your setup code here, to run once:
configArduino();
}

void loop() {
  // go straight
motors('b','A',35);
pause(2000);

//turn right
motors('2','A',35);
motors('1','B',35);
pause(700);

  // go straight
motors('b','A',35);
pause(1000);

//turn left
motors('1','A',35);
motors('2','B',35);
pause(500);

  // go straight
motors('b','A',35);
pause(1000);

//turn right
motors('2','A',35);
motors('1','B',35);
pause(500);

 // go straight
motors('b','A',35);
pause(1000);

//turn right
motors('2','A',35);
motors('1','B',35);
pause(300);

 // go straight
motors('b','A',35);
pause(1000);

//turn right
motors('2','A',35);
motors('1','B',35);
pause(200);

motors('b','o',35);
pause(5000);

}
