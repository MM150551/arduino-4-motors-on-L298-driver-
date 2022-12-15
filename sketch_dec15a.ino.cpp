#include <Arduino.h>
#line 1 "C:\\Users\\mina1\\AppData\\Local\\Temp\\.arduinoIDE-unsaved20221115-348-54ivq8.5vz1v\\sketch_dec15a\\sketch_dec15a.ino"

int input1 = 9, input2 = 8, input3 = 7, input4= 6;
int switch1 = 12;

#line 5 "C:\\Users\\mina1\\AppData\\Local\\Temp\\.arduinoIDE-unsaved20221115-348-54ivq8.5vz1v\\sketch_dec15a\\sketch_dec15a.ino"
int forward(int pin1,int pin2);
#line 9 "C:\\Users\\mina1\\AppData\\Local\\Temp\\.arduinoIDE-unsaved20221115-348-54ivq8.5vz1v\\sketch_dec15a\\sketch_dec15a.ino"
int backward(int pin1,int pin2);
#line 14 "C:\\Users\\mina1\\AppData\\Local\\Temp\\.arduinoIDE-unsaved20221115-348-54ivq8.5vz1v\\sketch_dec15a\\sketch_dec15a.ino"
void setup();
#line 25 "C:\\Users\\mina1\\AppData\\Local\\Temp\\.arduinoIDE-unsaved20221115-348-54ivq8.5vz1v\\sketch_dec15a\\sketch_dec15a.ino"
void loop();
#line 5 "C:\\Users\\mina1\\AppData\\Local\\Temp\\.arduinoIDE-unsaved20221115-348-54ivq8.5vz1v\\sketch_dec15a\\sketch_dec15a.ino"
int forward(int pin1,int pin2){
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,LOW);
}
int backward(int pin1,int pin2){
  digitalWrite(pin1,LOW);
  digitalWrite(pin2,HIGH);
}

void setup() {
pinMode(input1,OUTPUT);
pinMode(input2,OUTPUT);
pinMode(input3,OUTPUT);
pinMode(input4,OUTPUT);
pinMode(switch1,INPUT_PULLUP);



}

void loop() {
  if(digitalRead(switch1)){
    backward(input1,input2);
    backward(input3,input4);
  }
  else{
    forward(input1,input2);
    forward(input3,input4);
  }


}

