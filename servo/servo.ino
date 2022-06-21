#include <Servo.h>
int position = 0;
int i = 0;
int j = 0;
Servo servo_9;
void setup(){
servo_9.attach(6);
}
void loop(){
  delay(2000); // perpendicular
  position = 120;
  for (position = 90; position >= 0; position -= 1) {
  servo_9.write(position);
  delay(5); 
  }
  delay(5000); // lower
  for (position = 0; position <= 90; position += 1) {
  servo_9.write(position);
  delay(5);
  }
  
}
