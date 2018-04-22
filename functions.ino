void forward() {
  //To go forward
  digitalWrite(left_motor_forward, HIGH); //left motor clockwise
  digitalWrite(left_motor_backward, LOW);
  digitalWrite(right_motor_forward, HIGH); //right motor clockwise
  digitalWrite(right_motor_backward, LOW);

}
void backward() {
  //To go backward
  digitalWrite(left_motor_forward, LOW ); //left motor counter-clockwise
  digitalWrite(left_motor_backward, HIGH);
  digitalWrite(right_motor_forward, LOW); //right motor counter-clockwise
  digitalWrite(right_motor_backward, HIGH);
}
void left() {
  //To take a left turn
  digitalWrite(left_motor_forward, HIGH); //left motor clockwise
  digitalWrite(left_motor_backward, LOW);
  digitalWrite(right_motor_forward, LOW); //right motor counter-clockwise
  digitalWrite(right_motor_backward, HIGH);
}
void right() {
  //To take a right turn
  digitalWrite(left_motor_forward, LOW); //left motor counter-clockwise
  digitalWrite(left_motor_backward, HIGH);
  digitalWrite(right_motor_forward, HIGH);//right motor clockwise
  digitalWrite(right_motor_backward, LOW);
}
void motorstop(){
  digitalWrite(left_motor_forward, LOW); //left motor stop
  digitalWrite(left_motor_backward, LOW);
  digitalWrite(right_motor_forward, LOW);//right motor stop
  digitalWrite(right_motor_backward, LOW);
}

