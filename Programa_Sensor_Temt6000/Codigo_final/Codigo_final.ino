int buzzer = 2 ;
#define LIGHTSENSORPIN 27

void setup() {
  pinMode(LIGHTSENSORPIN,  INPUT);
  pinMode (buzzer, OUTPUT) ;
  Serial.begin(9600);
}

void loop() {
  //Sensor de luz

  float reading = analogRead(LIGHTSENSORPIN);
  float square_ratio = reading / 4095.0;
  Serial.println(reading);
  delay (100);

  //Buzzer

  unsigned char i, j ;// definimos variables
  for (i = 0; i < 80; i++) // cuando la frecuencia de sonido
  {
    digitalWrite (buzzer, HIGH) ;// Enviar sonido
    delay (1) ;// Delay 1ms
    digitalWrite (buzzer, LOW) ;// No enviar sonidodo not send voice
    delay (1) ;// delay ms
  }
  for (i = 0; i < 100; i++) // Cuando pase a esta frecuencia
  {
    digitalWrite (buzzer, HIGH) ;// Enviar sonido
    delay (2) ;// delay 2ms
    digitalWrite (buzzer, LOW) ;// No enviar sonidodo not send voice
    delay (2) ;// delay 2ms
  }
}
