#include "Application/Application.hpp"
#include "./InputManager/Input.hpp"

class StarterApplication : public Application
{
public:
    StarterApplication(const char* _name, Input* _InputManager);
    void Run();

private:
    int m_menuIndex;
    Menu* m_menus[2];
    Input* m_InputManager;
};