// LED YAKMA
void setup() {
  pinMode(13,OUTPUT);
}
void loop() {
digitalWrite(13,HIGH);
}

// lED'i yanýp söndürme

void setup() {
  pinMode(13,OUTPUT);
}
void loop() {
digitalWrite(13,HIGH);
delay(1000);//ms cinsinden (1000ms=1s)
digitalWrite(13,LOW);
delay(1000);

}

//TRAFÝK LAMBASI 
int led=13;

void setup()
{
  pinMode(led,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);  
}
void loop()
{
  digitalWrite(led,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  delay(30);
  digitalWrite(led,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  delay(20);
  digitalWrite(led,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  delay(10);

}
