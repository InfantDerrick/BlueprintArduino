#define pwmPin1 11
#define pwmPin2 10
#define pwmPin3 9
void setup() {
  // put your setup code here, to run once:
  pinMode(pwmPin1, OUTPUT);
  pinMode(pwmPin2, OUTPUT);
  pinMode(pwmPin3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 250; i++){
    analogWrite(pwmPin1, i);
    delay(25);
  }
  for(int i = 250; i > 0; i--){
    analogWrite(pwmPin1, i);
    delay(25);
  }
    for(int i = 0; i < 250; i++){
    analogWrite(pwmPin2, i);
    delay(25);
  }
  for(int i = 250; i > 0; i--){
    analogWrite(pwmPin2, i);
    delay(25);
  }
    for(int i = 0; i < 250; i++){
    analogWrite(pwmPin3, i);
    delay(25);
  }
  for(int i = 250; i > 0; i--){
    analogWrite(pwmPin3, i);
    delay(25);
  }
}
