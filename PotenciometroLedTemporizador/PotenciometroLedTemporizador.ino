int potPin = A0;  
int ledPin = 3;  
int val = 0;

void setup() {
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  val = analogRead(potPin);    // ler o valor do potenciômetro
  digitalWrite(ledPin, HIGH);  // ligar o ledPin
  delay(val*2);                  // pausar o programa por algum tempo
  digitalWrite(ledPin, LOW);   // desligar o ledPin
  delay(val*2);

}
