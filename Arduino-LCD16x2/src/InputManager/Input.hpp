#pragma once
#include <Arduino.h>

#include "../variables.hpp"

class Input
{
public:
  Input();

  void GetInputs();
  bool IsKeyPressed();
  int GetButtonsPins(int _index);

public:
  int leftButton;
  int downButton;
  int upButton;
  int rightButton;
  int middleButton;

private:
  int buttonsPins[5];
};