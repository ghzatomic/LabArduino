int potPin = A0;  
int portSpeak = 3; 
int val = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(potPin, INPUT);
  pinMode(portSpeak, OUTPUT);

}

void loop() {
  val = analogRead(potPin);    // ler o valor do potenciômetro
  if(val > 0){
    tone(portSpeak, val*4,100);
    Serial.println(val); //Mostra no Serial Monitor o valor obtido do potenciômetro
  }
}
