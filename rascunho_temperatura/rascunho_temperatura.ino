const int sensor_temperatura = A0;
int leitura_sensor;
float temperatura;
int led_vm = 5;
int led_am = 4;
int led_vd = 3;
int buzina = 2;
int botao1 = 12;
int botao2 = 11;
int estadobotao1 = LOW;
int estadobotao2 = LOW;

void setup() {
  // put your setup code here, to run once:
  analogReference(INTERNAL);
  pinMode(led_vm, OUTPUT);
  pinMode(led_am, OUTPUT);
  pinMode(led_vd, OUTPUT);
  pinMode(buzina, OUTPUT);
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  estadobotao1 = digitalRead(botao1);
  estadobotao2 = digitalRead(botao2);

  leitura_sensor = analogRead(sensor_temperatura);
  temperatura = leitura_sensor * 0.1075268817204301;
  Serial.print ("Temperatura: ");
  Serial.println(temperatura);
  delay(1000);

  if (temperatura < 28)
  {
    digitalWrite(led_vd, HIGH);
    digitalWrite(led_am, LOW);
    digitalWrite(led_vm, LOW);
    noTone(buzina);
  }
  if (temperatura >= 28 && temperatura <= 30)
  {
    digitalWrite(led_am, HIGH);
    digitalWrite(led_vd, LOW);
    digitalWrite(led_vm, LOW);
    noTone(buzina);
  }
  if ( temperatura > 30)
  {
    digitalWrite(led_vm, HIGH);
    digitalWrite(led_vd, LOW);
    digitalWrite(led_am, LOW);
    tone(buzina, 2000);
  }
  if (estadobotao1 == HIGH) {
    while (estadobotao2 != HIGH) {
      digitalWrite(led_vm, HIGH);
      digitalWrite(led_vd, LOW);
      digitalWrite(led_am, LOW);
      tone(buzina, 2000);
      estadobotao2 = digitalRead(botao2);
    }
  }

  Serial.print("Estado botao 1: ");
  Serial.println(estadobotao1);
  Serial.print("Estado botao 2: ");
  Serial.println(estadobotao2);
}
