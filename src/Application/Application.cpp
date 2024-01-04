#include "Application.hpp"

Menu *Application::GetMenu()
{
    return m_menu;
}

void Application::ClearMenu()
{
    m_menu->Clear();
}
