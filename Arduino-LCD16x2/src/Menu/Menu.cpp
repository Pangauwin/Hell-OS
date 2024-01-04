#include "Menu.hpp"
#include <string.h>

Menu::Menu() : m_content(new char[32]())
{

}

Menu::Menu(const char* _content) : m_content(new char[32]())
{
    int size = strlen(_content);
    for (int i = 0; i < size; i++)
    {
        m_content[i] = _content[i];
    }
}

char* Menu::GetContent()
{
    return m_content;
}

void Menu::SetFirstLine(const char *_content)
{
    int size = strlen(_content);
    for (int i = 0; i < size; i++)
    {
        m_content[i] = _content[i];
    }
}

void Menu::SetSecondLine(const char *_content)
{
    int size = strlen(_content);
    for (int i = 0; i < size; i++)
    {
        m_content[i + 16] = _content[i];
    }
}

void Menu::Clear()
{
    for (int i = 0; i < 32; i++)
    {
        m_content[i] = 0;
    }
    
}

void Menu::SetContent(const char* _content)
{
    int size = strlen(_content);
    for (int i = 0; i < size; i++)
    {
        m_content[i] = _content[i];
    }
}