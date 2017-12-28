const int botao = 6;
int LED_VM = 8;
int LED_AM = 9;
int LED_VD = 10;
int estadobotao = LOW;
int led = LOW;
int ultimoestadobotao = LOW;
int ultimoestadoled = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(botao, INPUT);
  pinMode(LED_VM, OUTPUT);
  pinMode(LED_AM, OUTPUT);
  pinMode(LED_VD, OUTPUT);
  Serial.begin(9600);

}


void loop() {
  // put your main code here, to run repeatedly:
  estadobotao = digitalRead(botao);
  Serial.println(estadobotao);
  LED_VM = digitalRead(led);
  LED_AM = digitalRead(led);
  LED_VD = digitalRead(led);

  if (estadobotao != ultimoestadobotao)
  {
    if (estadobotao == HIGH)
    {
      if (ultimoestadoled == HIGH)

      {
       {
        digitalWrite(LED_VD, HIGH);
        delay(7000);
        digitalWrite(LED_VD, LOW);
        delay(2);
        digitalWrite(LED_AM, HIGH);
        delay(2000);
        digitalWrite(LED_AM, LOW);
        delay(2);
        digitalWrite(LED_VM, HIGH);
        delay(5000);
        digitalWrite(LED_VM, LOW);
        delay(2);
      }
      }
      estadobotao=botao;
    }
    ultimoestadobotao = estadobotao;
  }
        
}
