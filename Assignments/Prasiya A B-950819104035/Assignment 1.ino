void setup()
{
  Serial.begin(9600);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(8,INPUT);
  
}

void loop()
{
  double a= analogRead(A0);
  double t=(((a/1024)*5)-0.5)*100;
  if(t>100)
  {
    tone(12,30);
    Serial.println("FIRE ALERT!");
    delay(1000);
  }
  else
  {
    noTone(12);
    delay(1000);
  }
  int p=digitalRead(8);
  digitalWrite(13,LOW);
  if(p)
  {
    Serial.println("Someone entering the Bathroom Turn on Lights");
    digitalWrite(13,HIGH);
  }
  
}