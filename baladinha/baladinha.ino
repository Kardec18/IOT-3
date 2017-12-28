int led_vm = 6;
int led_am = 8;

void setup() {
  // put your setup code here, to run once:
pinMode(led_vm,OUTPUT);
pinMode(led_am,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led_vm,HIGH);
delay(50);
digitalWrite(led_vm,LOW);
delay(50);
digitalWrite(led_am,HIGH);
delay(50);
digitalWrite(led_am,LOW);
delay(50);
}
