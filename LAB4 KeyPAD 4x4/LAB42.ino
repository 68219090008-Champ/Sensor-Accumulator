/*LAB 4.2*/
//https://app.cirkitdesigner.com/project/8854abe4-8bb4-4058-adb4-e877db6d5eb5


#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

#include <Keypad.h>

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

String input_password = "";


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

}

void loop() {
  char key = keypad.getKey(); // Get the key pressed

  if (key) { // If a key is pressed

    lcd.setCursor(0, 0);
    lcd.print("Key Pressed: ");
    lcd.setCursor(0, 1);
    lcd.print(key);

    Serial.print("Key Pressed: ");
    Serial.println(key); // Print the key to the serial monitor

  }
}
