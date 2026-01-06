/*LAB6.1*/
//https://app.cirkitdesigner.com/project/1e78f19e-9d96-49fa-9483-f1829806bb93

#define motor 9



void setup() {
  pinMode(motor,OUTPUT);

}

void loop() {
  digitalWrite(motor,1);
  delay(2000);
  digitalWrite(motor,0);
  delay(2000);

}
