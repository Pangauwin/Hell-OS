#include "Input.hpp"

Input::Input()
{
  leftButton = 0;
  downButton = 0;
  upButton = 0;
  rightButton = 0;
  middleButton = 0;

  buttonsPins[0] = LEFT_BUTTON_PIN;
  buttonsPins[1] = MIDDLE_BUTTON_PIN;
  buttonsPins[2] = TOP_BUTTON_PIN;
  buttonsPins[3] = RIGHT_BUTTON_PIN;
  buttonsPins[4] = BOTTOM_BUTTON_PIN;
}

void Input::GetInputs()
{
  leftButton = digitalRead(buttonsPins[0]);
  middleButton = digitalRead(buttonsPins[1]);
  upButton = digitalRead(buttonsPins[2]);
  rightButton = digitalRead(buttonsPins[3]);
  downButton = digitalRead(buttonsPins[4]);
}

bool Input::IsKeyPressed()
{
  if (digitalRead(buttonsPins[0]) == 1 || digitalRead(buttonsPins[1]) == 1 || digitalRead(buttonsPins[2]) == 1 
  || digitalRead(buttonsPins[3]) == 1 || digitalRead(buttonsPins[4]) == 1)
  {
      return true;
  }
  return false;
}

int Input::GetButtonsPins(int _index)
{
  return buttonsPins[_index];
}
