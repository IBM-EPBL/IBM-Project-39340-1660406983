int Sensor=11;
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(Sensor, INPUT);
  
  
}

void loop()
{
  double a=analogRead(A0);
  double Temp=((((a/1024)*5)-0.5)*100);
  if(Sensor==HIGH)
  {
    digitalWrite(11,HIGH);
  }
  digitalWrite(11,LOW);
  if(Temp>25)
  {
  digitalWrite(12,HIGH);
  tone(12,450);
  }
  digitalWrite(12,LOW);
  noTone(12);
  delay(5);
  
}
Footer
© 2022 GitHub, Inc.