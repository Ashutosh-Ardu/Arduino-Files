int led = 13;
int sen = A5;

void setup(){
  pinMode(led,OUTPUT);
  pinMode(sen,INPUT);
  Serial.begin(9600);
}

void loop(){
  long measurement = vibration();
  delay(50);
  Serial.println(measurement);
  if(measurement > 0){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
}

long vibration(){
  long measurement = pulseIn(sen,HIGH);
  return measurement;
}

//#include <Arduino.h>
//
//#include <stdio.h>

 

//#define ON 1
//
//#define OFF 0

 

/*

 * Pin Description

 */

//int vibration_Sensor = A5;
//
//int LED = 13;

 

/*

 * Programme flow Description

 */

//int present_condition = 0;
//
//int previous_condition = 0;

 

/*

 * Pin mode setup

 */

//void setup() {
//
//pinMode(vibration_Sensor, INPUT);
//
//pinMode(LED, OUTPUT);
//Serial.begin(9600);
//
//}

 

/*

 * Led blink

 */

//void led_blink(void);

 

/*

 * main_loop

 */

 

//void loop() {
//
//previous_condition = present_condition;
//
//present_condition = digitalRead(A5); // Reading digital data from the A5 Pin of the Arduino.
//
//Serial.println(present_condition);
//
//if (previous_condition != present_condition) {
//
//led_blink();
//
// 
//
//} else {
//
//digitalWrite(LED, OFF);
//
//}
//
//}
//
// 
//
//void led_blink(void) {
//
//digitalWrite(LED, ON);
//
//delay(250);
//
//digitalWrite(LED, OFF);
//
//delay(250);
//
//digitalWrite(LED, ON);
//
//delay(250);
//
//digitalWrite(LED, OFF);
//
//delay(250);
//
//}
