#define con 13
#define led4 12
#define led3 11
#define led2 10
#define led1 9
#define buzz 8
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(con, INPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(buzz, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(con,HIGH);
int stat = digitalRead(con);
Serial.println(stat);

if (stat==0)
{
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  tone (buzz, 200,100);
  delay(150);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  delay(150);
  }
}
