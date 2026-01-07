// LAB 6.4
//https://app.cirkitdesigner.com/project/5c2ae5ba-3dbe-4869-8837-9ede21b671c1


#define MotorL 2
#define MotorR 3

#define MotorL1 4
#define MotorR1 5

#define ENB 6
#define ENA 9

void setup() {
  Serial.begin(9600);
  pinMode(MotorL, OUTPUT);
  pinMode(MotorR, OUTPUT);
  pinMode(MotorL1, OUTPUT);
  pinMode(MotorR1, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(ENA, OUTPUT);

}

void loop() {
  Moff();

  analogWrite(ENB, 255);   // หมุนไปข้างหน้า
  analogWrite(ENA, 255);
  digitalWrite(MotorL, LOW);  
  digitalWrite(MotorR, HIGH);
  digitalWrite(MotorL1, LOW);
  digitalWrite(MotorR1, HIGH);
  Serial.println("Motor rotate forward ");
  delay(2000);

  Moff();

  analogWrite(ENB, 255);   // หมุนกลับหลัง
  analogWrite(ENA, 255);
  digitalWrite(MotorL, HIGH);   
  digitalWrite(MotorR, LOW);
  digitalWrite(MotorL1, HIGH);   
  digitalWrite(MotorR1, LOW);
  Serial.println("Motor  turn around");
  delay(2000);

  Moff();

  analogWrite(ENB, 255);   // เลียวซ้าย
  analogWrite(ENA, 50);
  digitalWrite(MotorL, LOW);  
  digitalWrite(MotorR, HIGH);
  digitalWrite(MotorL1, LOW);
  digitalWrite(MotorR1, HIGH);
  Serial.println("Motor Turn left");
  delay(2000);

  Moff();

  analogWrite(ENB, 50);   // หมุนไปข้างซ้าย
  analogWrite(ENA, 255);
  digitalWrite(MotorL, LOW);  
  digitalWrite(MotorR, HIGH);
  digitalWrite(MotorL1, LOW);
  digitalWrite(MotorR1, HIGH);
  Serial.println("Motor turn right");
  delay(2000);


}
void Moff(){
 analogWrite(ENB, 0);   // หยุดนิ่ง
  analogWrite(ENA, 0);
  digitalWrite(MotorL, LOW);   
  digitalWrite(MotorR, LOW);
  digitalWrite(MotorL1, LOW);   
  digitalWrite(MotorR1, LOW);
  Serial.println("Motor off");
  delay(2000);
}
