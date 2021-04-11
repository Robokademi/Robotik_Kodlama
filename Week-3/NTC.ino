#define sicaklikSensor A0


void setup()
{
  
  Serial.begin(9600);
}

void loop()
{
  int okunanSicaklik=analogRead(sicaklikSensor);  
    float reelSicaklik=okunanSicaklik/9.31;
    Serial.print("sicaklik degeri : ");
    Serial.println(reelSicaklik);
}
