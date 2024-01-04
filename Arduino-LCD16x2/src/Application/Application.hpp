#pragma once
#include "./Menu/Menu.hpp"

class Application
{
public:
    Application() = default;
    Menu* GetMenu();
    void ClearMenu();
    void virtual Run() = 0;

    char* m_name;
    Menu* m_menu;
};