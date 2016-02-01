int inPin = 1; //pin leitura do sinal do IR Receptor
int val = 0;     // variavel

void setup()
{
  Serial.begin(9600);  //Habilitando a conexao serial
  pinMode(inPin, INPUT); // setando pino analogico c/entrada
}

void loop()
{
  val = analogRead(inPin);   // lendo o pino analogico
  Serial.println(val); //enviando valor lido para serial
  delay(10);
}



