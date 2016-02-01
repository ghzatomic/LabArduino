int potPin = A0;  
int ledVermPin = 3; 
int ledVerdPin = 5; 
int ledBrancoPin = 6; 
int val = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(potPin, INPUT);
  pinMode(ledVermPin, OUTPUT);
  pinMode(ledVerdPin, OUTPUT);
  pinMode(ledBrancoPin, OUTPUT);

}

void loop() {
  val = analogRead(potPin);    // ler o valor do potenciômetro
  if(val < 239){
    analogWrite(ledVermPin, (val*4)); //Acende o led com intensidade proporcional ao valor obtido
    Serial.println(val); //Mostra no Serial Monitor o valor obtido do potenciômetro
  }else if(val < 478){
    analogWrite(ledVerdPin, ((val-239)*4)); //Acende o led com intensidade proporcional ao valor obtido
    Serial.println(val); //Mostra no Serial Monitor o valor obtido do potenciômetro
  }else{
    analogWrite(ledBrancoPin, ((val-478)*4)); //Acende o led com intensidade proporcional ao valor obtido
    Serial.println(val); //Mostra no Serial Monitor o valor obtido do potenciômetro
  }
}
