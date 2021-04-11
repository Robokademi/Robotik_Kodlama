void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  
}

void loop()
{
  for(int ledpin=13;ledpin>=4;ledpin--){
    
    digitalWrite(ledpin,HIGH);
    delay(30);
  }
  delay(300);
  
  for(int ledpin=13;ledpin>=4;ledpin--){
    
    digitalWrite(ledpin,LOW);
    delay(30);
  }
  delay(300);
  
  for(int ledpin=4;ledpin<=13;ledpin++){
    
    digitalWrite(ledpin,HIGH);
    delay(30);
  }
  delay(300);
  
  for(int ledpin=4;ledpin<=13;ledpin++){
    
    digitalWrite(ledpin,LOW);
    delay(30);
  }
  delay(300);
  
}
