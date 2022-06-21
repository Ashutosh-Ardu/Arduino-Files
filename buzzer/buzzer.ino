int arr=A0;
int buzzer=13;
int red=10;
int blue=A0;
int green=7;

void setup()
{
  Serial.begin(9600);
  pinMode(buzzer,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop()
{
  analogWrite(red,0);
 analogWrite(blue,0);
 analogWrite(green,255); 
  tone(buzzer,100);
  Serial.println("buzzer high");
  delay(1000);
  noTone(buzzer);
  analogWrite(red,255);
 analogWrite(blue,0);
 analogWrite(green,0); 
  delay(1000);
  
}
