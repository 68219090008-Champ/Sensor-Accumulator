/*LAB 4.2*/
//https://app.cirkitdesigner.com/project/3ad28233-eb12-4f28-a835-3aa69ec4dcc0

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

#include <Keypad.h>

#define LED_B 13
#define Sol 8

const byte ROWS = 4; // Number of rows
const byte COLS = 4; // Number of columns




byte rowPins[ROWS] = {12, 11, 10, 9};   // Connect to R1, R2, R3, R4
byte colPins[COLS] = {7, 6, 5, 4};   // Connect to C1, C2, C3, C4

char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

// Create a Keypad object
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);


String display_password = "";
String input_password = "";

String input_password1 = "0825128368";


void setup() {
  Serial.begin(9600); // Initialize serial communication
  Serial.println("4x4 Keypad Test");


  lcd.init();
  lcd.backlight();
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("4x4 Keypad Test ");
  lcd.setCursor(0, 1);
  lcd.print("Thirathon");

  delay(4000);
  lcd.clear();

  pinMode(Sol, OUTPUT); 
  pinMode(LED_B, OUTPUT); 
  digitalWrite(LED_B, LOW);
  digitalWrite(Sol, LOW);

}

void loop() {
  char key = keypad.getKey(); // Get the key pressed

  if (key) { // If a key is pressed

    //เมื่อกด ปุ่ม * == > Clear
    if (key == '*') {
      input_password = "";
      display_password = "";
      lcd.clear();
      lcd.setCursor(0, 1);
      lcd.print("CLEAR PASSWORD");
      delay(1000);
      lcd.clear();

    }
    else if (key == '#') { 
        lcd.clear(); 
        if (input_password == input_password1) { 
         lcd.setCursor(0, 0); 
         lcd.print("OK PASSWORD"); 
         Serial.println("Password OK!"); 
         digitalWrite(LED_B, 1);
         digitalWrite(Sol, 1);

         }
        else { lcd.setCursor(0, 0); 
         lcd.print("NO PASSWORD"); 
         Serial.println("Password NO!"); 
         digitalWrite(LED_B, 0);
         digitalWrite(Sol, 0);
         } 
         delay(2000); 
         lcd.clear(); 
         input_password = ""; // รีเซ็ตรหัสหลังตรวจสอบ 
         display_password = "";
         }
    else{
    input_password += key;
    display_password += "*";
    lcd.setCursor(0, 0);
    lcd.print("Key Pressed: ");
    lcd.setCursor(0, 1);
    lcd.print(display_password);

    Serial.print("Key Pressed: ");
    Serial.println(key); // Print the key to the serial monitor
    }

  }
  
}
