/*
  Bluetooth Controlled 2 Wheeler
  Author: Mehedi Hasan

  Board: Arduino Uno
  Bluetooth Module: HC-05
  Motor Driver: L298n Motor Driver Module
*/
#include<SoftwareSerial.h>
SoftwareSerial BT(11, 10); //RX, TX
char BluetoothData;
int left_motor_forward = 3;
int right_motor_forward = 5;
int left_motor_backward = 2;
int right_motor_backward = 4;
int left_motor_enable = 9; //Must be in PWD pin
int right_motor_enable = 6; //Must be in PWD pin
unsigned long start = 0;
void setup() {
  BT.begin(9600); //Initialize Bluetooth Module
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);

}
void loop() {
  analogWrite(left_motor_enable, 225); //enable left motor
  analogWrite(right_motor_enable, 225); //enable right motor
  if (BT.available()) {
    BluetoothData = BT.read();
    switch (BluetoothData) {
      case '1': {
          forward();
          break;
        }

      case '2': {
          backward();
          break;
        }
      case '3': {
          left();
          break;
        }
      case '4': {
          right();
          break;
        }
      case '5': {
          motorstop();
          break;
        }
    }
      delay(100);
      motorstop();
  }
}
