int botao = 6;
int estadobotao;
int led = 8;
int ledon;
int ledoff;

void setup() {
  // put your setup code here, to run once:
pinMode(botao,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 estadobotao = digitalRead(botao);
 ledon = digitalRead(led);
 ledoff = digitalRead(led);
 if ( estadobotao == HIGH ) 
 {
  digitalWrite(led,HIGH);
  Serial.println(estadobotao);
  }
  else {
    digitalWrite(led,LOW);
   Serial.println(estadobotao);
    }
 if ( ledon = estadobotao ) 
 {
  digitalWrite(ledon,HIGH);
 }
 else
 {
  digitalWrite(ledon,LOW);
 }
 if ( ledoff = estadobotao )
 {
  digitalWrite(ledoff,HIGH);
  }
  else
  {
   digitalWrite(ledoff,LOW);
  }
 if (ledon != estadobotao)
 { 
  digitalWrite(ledon,HIGH);
  if (ledoff != estadobotao)
    {
    digitalWrite(ledoff,HIGH);
    }
 }
}
