int SENSOR = 0;
int d = 0;
int led = 3;
// the setup routine runs once when you press reset:
void setup() {                
  Serial.begin(9600);  
  pinMode(led, OUTPUT); 
}

// the loop routine runs over and over again forever:
void loop() {
  d = analogRead(SENSOR);
  Serial.print(d);
  
  analogWrite(led, 255-d*6);
  
  
}
