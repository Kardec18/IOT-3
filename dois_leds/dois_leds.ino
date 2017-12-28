
int led_vm = 6;
int led_am = 8;
int n = 1 ;
int n1 = 2 ;

void setup() {
  // put your setup code here, to run once:

pinMode(led_vm,OUTPUT);
pinMode(led_am,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if ( n == 1 )
{
digitalWrite(led_vm,HIGH);
delay(200);

}
else
{
digitalWrite(led_am,HIGH);
delay(200);


}
  }
