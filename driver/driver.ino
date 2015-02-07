const int pinESC = 9;
const int pinServo = 11;
int cmd = 0;

void goForward();
void turnLeft();
void turnRight();
void stopMotors();
void handshake();

void setup(){
Serial.begin(9600);

pinMode(pinESC, OUTPUT);
pinMode(pinServo, OUTPUT);

stopMotors();



}


void loop(){
cmd = Serial.read();
Serial.println(cmd);

  if (cmd == 'f') goForward();
  
  else if (cmd == 'l') turnLeft();
  
  else if (cmd == 'r') turnRight();
    
  else if (cmd == 's') stopMotors();

delay(5);

}

void goForward(){
analogWrite(pinServo, 160); // test this
analogWrite(pinESC, 180); // test this 

}

void turnLeft(){
analogWrite(pinServo, 230); // test this
analogWrite(pinESC, 180); // decrease speed 

}

void turnRight(){
analogWrite(pinServo, 100); // test this
analogWrite(pinESC, 180); // decrease speed 

}

void stopMotors(){
analogWrite(pinServo, 0); // test this
analogWrite(pinESC, 0); // decrease speed 

}

void handshake(char cmd){
  
  if (cmd == 'f') Serial.write("cmd: going forward");
  
  else if (cmd == 'l') Serial.write("cmd: turning left");
  
  else if (cmd == 'r') Serial.write("cmd: turning right");
    
  else if (cmd == 's') Serial.write("cmd: stropping motors");

  
  
}
