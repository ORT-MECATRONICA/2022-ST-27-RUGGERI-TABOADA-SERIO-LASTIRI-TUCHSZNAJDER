float sensorVal;
float miliV;
int porcentaje;

int msTimer = 0;
int sTimer = 0;

void setup()
{
  Serial.begin(9600);
  /*Serial.print("Primer valor sensor: ");
  Serial.println(sensorVal);*/
}

void loop()
{

  sensorVal = analogRead(15);
  miliV = (sensorVal / 4095) * 3.3;
  porcentaje = (sensorVal / 4095)* 100;
  //analogWrite(7, luzIntensidad);
  
  /*if (sTimer == 1)
  {*/
    Serial.print("Valor sensor: ");
    Serial.println(sensorVal);    
    Serial.print("Voltaje: ");
    Serial.print(miliV * 1000);
    Serial.println(" mV");
    Serial.print("Porcentaje: ");
    Serial.print(porcentaje);
    Serial.println("%");
    
}
