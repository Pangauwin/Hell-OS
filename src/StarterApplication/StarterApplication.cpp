#include <Arduino.h>
#include "./StarterApplication.hpp"

StarterApplication::StarterApplication(const char *_name, Input* _InputManager) : m_InputManager(_InputManager)
{
    m_name = (char*)_name;
    m_menuIndex = 0;

    m_menus[0] = new Menu();
    m_menus[1] = new Menu();

    m_menus[0]->SetFirstLine(m_name);
    m_menus[0]->SetSecondLine("Press Any Button");

    m_menus[1]->SetContent("Hello !");

    m_menu = m_menus[m_menuIndex];
}

void StarterApplication::Run()
{
    switch(m_menuIndex)
    {
        case 0:
            if(m_InputManager->IsKeyPressed())
                m_menuIndex = 1;           
    }
    m_menu = m_menus[m_menuIndex];
}
