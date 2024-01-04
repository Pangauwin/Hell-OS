#include <LiquidCrystal.h>
#include <string.h>

#include "../Application/Application.hpp"
#include "../Menu/Menu.hpp"

class Renderer
{
public:
    Renderer(LiquidCrystal* _lcd, Application* _currentApplication);
    void Render();
    void SetMenu(Menu* _menu);

private:
    LiquidCrystal* m_lcd;
    Menu* m_menu;
    Application* m_currentApplication;
    String m_prevFirstLineContent;
    String m_prevSecondLineContent;
};