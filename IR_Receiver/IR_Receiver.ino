#include <IRremote.h>  //including infrared remote header file     
int receiver = 11; // the pin where you connect the output pin of IR sensor     
int pin1 = 10;
int pin2 = 9;
int tag1 = 0,tag2 = 0;
IRrecv IR(receiver);
decode_results result;     
   
void setup()     
{     
Serial.begin(9600);     
IR.enableIRIn();
pinMode(pin1,OUTPUT);
pinMode(pin2,OUTPUT);
} 
void loop()     
{     
if (IR.decode(&result))// Returns 0 if no data ready, 1 if data ready.     
{     
//  long code = (IR.decodedIRData.decodedRawData,DEC);
int code = result.value;
  Serial.println(code);
  if(code == 109){
    tag1+=1;
    if(tag1 % 2 != 0)
      digitalWrite(pin1,HIGH);
    else
      digitalWrite(pin1,LOW);
  }
  else if(code == 110){
    tag2 += 1;
    if(tag2 % 2 != 0)
      digitalWrite(pin2,HIGH);
    else
      digitalWrite(pin2,LOW);
  }
 IR.resume();    
}// Restart the ISR state machine and Receive the next value     
} 
//red = C0006D
//green = C0006E
