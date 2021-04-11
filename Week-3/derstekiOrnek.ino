#define sicaklikSensor A0


void setup()
{
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int okunanSicaklik=analogRead(sicaklikSensor);  float reelSicaklik=okunanSicaklik/9.31;
    Serial.print("sicaklik degeri : ");
    Serial.println(reelSicaklik);
  
  if(reelSicaklik>=35){
    digitalWrite(10,HIGH);
     digitalWrite(9,LOW);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    Serial.println(" Sıcak");
  
  }
  if(30<reelSicaklik &&reelSicaklik<35 ){
  digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    Serial.println(" hafif sicak");
  }
  if(25<reelSicaklik && reelSicaklik<30){
  digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(7,LOW);
    Serial.println(" ilik");
  }
  if(reelSicaklik<=25){
  digitalWrite(7,HIGH);
      digitalWrite(9,LOW);
    digitalWrite(8,LOW);
    digitalWrite(10,LOW);
    Serial.println(" soguk");
  }
  
  
    
    
  
  
 
 
  
}
