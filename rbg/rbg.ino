int red=10;
int blue=A0;
int green=7;

void setup()
{
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop()
{
 analogWrite(red,255);
 analogWrite(blue,0);
 analogWrite(green,0);
 delay(2000);
 analogWrite(red,0);
 analogWrite(blue,0);
 analogWrite(green,255);
 delay(2000);
 analogWrite(red,0);
 analogWrite(blue,0);
 analogWrite(green,0); 
 delay(2000);
}
