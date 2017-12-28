int botao = 9;
int estadobotao;
int led = 3;
void setup() {
  // put your setup code here, to run once:
pinMode(botao,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
estadobotao = digitalRead(botao);
Serial.println(estadobotao);
if (estadobotao == HIGH) {
  digitalWrite(led,HIGH);
  }
  else
  {digitalWrite(led,LOW);
    }
}



