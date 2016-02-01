int SENSOR = 0;
int d = 0;
int led = 2;
// the setup routine runs once when you press reset:
void setup() {                
  Serial.begin(9600);  
  pinMode(led, OUTPUT); 
}

// the loop routine runs over and over again forever:
void loop() {
  d = analogRead(SENSOR);
  Serial.print(d);
  
  if (d > 20){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
  delay(100);
}
