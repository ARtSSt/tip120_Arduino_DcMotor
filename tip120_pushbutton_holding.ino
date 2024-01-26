#define pwm 3
#define BUTTON_PIN 7

void setup() {
  // put your setup code here, to run once:
  pinMode(pwm,OUTPUT);
  digitalWrite(pwm,LOW);
  pinMode(BUTTON_PIN, INPUT);

}

void loop() {
  if (digitalRead(BUTTON_PIN) == HIGH) {
      digitalWrite(pwm,HIGH);
      delay(500);
  }
  else { 
    digitalWrite(pwm,LOW);
    delay(500);
  }
}