#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int Up_Button = 2;
int Down_Button = 3;
int Select_Button = 4;
int Back_Button = 5;
int Menu = 1;


void setup() {
  Serial.begin(115200);
  lcd.begin();
  lcd.backlight();
  pinMode(Up_Button, INPUT);
  pinMode(Down_Button, INPUT);
  pinMode(Select_Button, INPUT);
}

void loop() {
  if (digitalRead(2) == 1) {
    if (Menu == 1) {
      Menu = 1;
    } else if (Menu != 1) {
      Menu = Menu - 1;
    }
  }
  if (digitalRead(3) == 1) {
    if (Menu == 4) {
      Menu = 4;
    } else if (Menu != 4) {
      Menu = Menu + 1;
    }
  }

  if (Menu == 1) {
    Menu_1();
  }
  if (Menu == 2) {
    Menu_2();
  }
  if (Menu == 3) {
    Menu_3();
  }
  if (Menu == 4) {
    Menu_4();
  }
  if (Menu) {
    delay(100);
  }
  delay(50);
}

void Menu_1() {
  lcd.clear();
  while (Menu == 1) {
    lcd.setCursor(1, 0);
    lcd.print("Engines : ");
    lcd.setCursor(1, 1);
    lcd.setCursor(15, 0);
    lcd.print(">");
    lcd.setCursor(15, 1);
    lcd.print(">");
    if (Menu) {
      delay(300);
    }
    if (digitalRead(2) == 1) {
      if (Menu == 1) {
        Menu = 1;
      } else if (Menu != 1) {
        Menu = Menu - 1;
      }
    }
    if (digitalRead(3) == 1) {
      if (Menu == 4) {
        Menu = 4;
      } else if (Menu != 4) {
        Menu = Menu + 1;
      }
    }
  }  delay(1);
}
void Menu_2() {
  lcd.clear();
  while (Menu == 2) {
    lcd.setCursor(1, 0);
    lcd.print("Sensors : ");
    lcd.setCursor(1, 1);
    lcd.setCursor(0, 0);
    lcd.print("<");
    lcd.setCursor(0, 1);
    lcd.print("<");
    lcd.setCursor(15, 0);
    lcd.print(">");
    lcd.setCursor(15, 1);
    lcd.print(">");
    delay(10);
    if (Menu) {
      delay(300);
    }
    if (digitalRead(2) == 1) {
      if (Menu == 1) {
        Menu = 1;
      } else if (Menu != 1) {
        Menu = Menu - 1;
      }
    }
    if (digitalRead(3) == 1) {
      if (Menu == 4) {
        Menu = 4;
      } else if (Menu != 4) {
        Menu = Menu + 1;
      }
    }
  }
  delay(1);
}
void Menu_3() {
  lcd.clear();
  while (Menu == 3) {
    lcd.setCursor(1, 0);
    lcd.print("Life Support : ");
    lcd.setCursor(1, 1);
    lcd.setCursor(0, 0);
    lcd.print("<");
    lcd.setCursor(0, 1);
    lcd.print("<");
    lcd.setCursor(15, 0);
    lcd.print(">");
    lcd.setCursor(15, 1);
    lcd.print(">");
    delay(10);
    if (Menu) {
      delay(300);
    }
    if (digitalRead(2) == 1) {
      if (Menu == 1) {
        Menu = 1;
      } else if (Menu != 1) {
        Menu = Menu - 1;
      }
    }
    if (digitalRead(3) == 1) {
      if (Menu == 4) {
        Menu = 4;
      } else if (Menu != 4) {
        Menu = Menu + 1;
      }
    }
  }
  delay(1);
}
void Menu_4() {
  lcd.clear();
  while (Menu == 4) {
    lcd.setCursor(1, 0);
    lcd.print("NULL : ");
    lcd.setCursor(1, 1);
    lcd.setCursor(0, 0);
    lcd.print("<");
    lcd.setCursor(0, 1);
    lcd.print("<");
    delay(10);
    if (Menu) {
      delay(300);
    }
    if (digitalRead(2) == 1) {
      if (Menu == 1) {
        Menu = 1;
      } else if (Menu != 1) {
        Menu = Menu - 1;
      }
    }
    if (digitalRead(3) == 1) {
      if (Menu == 4) {
        Menu = 4;
      } else if (Menu != 4) {
        Menu = Menu + 1;
      }
    }
  }
  delay(1);
}