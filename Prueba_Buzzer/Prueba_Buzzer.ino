int buzzer = 8 ;// Configuramos el ping del buzzer
void setup ()
{
  pinMode (buzzer, OUTPUT) ;// Definimos el pin digital como salida
}
void loop ()
{
  unsigned char i, j ;// definimos variables
  while (1)
  {
    for (i = 0; i <80; i++) // cuando la frecuencia de sonido
    {
      digitalWrite (buzzer, HIGH) ;// Enviar sonido
      delay (1) ;// Delay 1ms
      digitalWrite (buzzer, LOW) ;// No enviar sonidodo not send voice
      delay (1) ;// delay ms
    }
    for (i = 0; i <100; i++) // Cuando pase a esta frecuencia
    {
      digitalWrite (buzzer, HIGH) ;// Enviar sonido
      delay (2) ;// delay 2ms
      digitalWrite (buzzer, LOW) ;// No enviar sonidodo not send voice
      delay (2) ;// delay 2ms
    }
  }
}
