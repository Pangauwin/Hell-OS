#include "common.hpp"
#include "StarterApplication/StarterApplication.hpp"

LiquidCrystal lcd(RS_PIN, E_PIN, DB4_PIN, DB5_PIN, DB6_PIN, DB7_PIN);
byte playerChar[] = {
  B01110,
  B00100,
  B01110,
  B10101,
  B10101,
  B00100,
  B01110,
  B10001
};


byte monsterChar[] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B01110,
  B10101,
  B11111,
  B10101  
};

byte wallChar[] = {
  B01100,
  B00110,
  B01100,
  B00110,
  B01100,
  B00110,
  B01100,
  B00110  
};

unsigned long lastRefresh = 0;

unsigned long frameNb = 0;
unsigned long allTime = 0;
const int tickRate = 10;

const int buzzerPin = 6;

Renderer* renderer = nullptr;
StarterApplication* startApplication = nullptr;
Application* currentApplication = nullptr;
Input* inputManager = nullptr;


void setup() {
  Serial.begin(9600);
  Serial.println("Loading...");
  lcd.begin(16, 2);
  
  lcd.home();
  lcd.print("Loading...");

  for(int i = 0; i < 5; i++)
  {
    pinMode(inputManager->GetButtonsPins(i), INPUT);  
  }

  lcd.createChar(1, playerChar);
  lcd.createChar(2, monsterChar);
  lcd.createChar(3, wallChar);

  lcd.clear();

  inputManager = new Input();

  startApplication = new StarterApplication("Hello app", inputManager);
  currentApplication = startApplication;

  renderer = new Renderer(&lcd, currentApplication);
  renderer->SetMenu(startApplication->GetMenu());
  Serial.println((int)startApplication->GetMenu());
}

void loop() {
  inputManager->GetInputs();
  currentApplication->Run();
  renderer->Render();

  delay((int)1000/tickRate - (millis() - allTime));
  frameNb ++;
  
  allTime = millis();
}

