int potPin = A0;  
int ledPin = 3; 
int val = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  val = analogRead(potPin);    // ler o valor do potenciômetro
  if(val > 0){
    analogWrite(ledPin, (180-val)); //Acende o led com intensidade proporcional ao valor obtido
    Serial.println(val); //Mostra no Serial Monitor o valor obtido do potenciômetro
  }
}
