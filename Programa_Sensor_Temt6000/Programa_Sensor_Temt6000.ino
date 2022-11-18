#define LIGHTSENSORPIN 34 

void setup() {
  pinMode(LIGHTSENSORPIN,  INPUT);    
  Serial.begin(9600);
}

void loop() {
  float reading = analogRead(LIGHTSENSORPIN); 
  float square_ratio = reading / 4095.0;      
  Serial.println(reading);                    
  delay (1000);
}
