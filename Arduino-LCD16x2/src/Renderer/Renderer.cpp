#include "Renderer.hpp"
#include "../Application/Application.hpp"
#include <string.h>
#include <Arduino.h>


Renderer::Renderer(LiquidCrystal* _lcd, Application* _currentApplication) : m_lcd(_lcd), m_currentApplication(_currentApplication), m_menu(_currentApplication->GetMenu()), m_prevFirstLineContent(""), m_prevSecondLineContent("")
{

}

void Renderer::SetMenu(Menu* _menu)
{
    m_menu = _menu;
}

void Renderer::Render()
{    
    m_menu = m_currentApplication->GetMenu();

    m_lcd->home();

    String firstLine = "";

    bool firstLineEnded = false;

    for (int i = 0; i < 16; i++)
    {
        if(!firstLineEnded)
        {
            if(m_menu->GetContent()[i] == 0)
            {
                firstLineEnded = true;
                firstLine += " ";
            }
            else if (m_menu->GetContent()[i] == m_prevFirstLineContent[i])
            {
                firstLine += "#";
            }
            else
            {
                firstLine += m_menu->GetContent()[i];
            }
        }

        else
        {
            firstLine += " ";
        }
    }

    String secondLine = "";
    bool secondLineEnded = false;
    
    for (int i = 0; i < 16; i++)
    {
        if(!secondLineEnded)
        {
            if(m_menu->GetContent()[i + 16] == 0)
            {
                secondLineEnded = true;
                secondLine += " ";
            }
            else if (m_menu->GetContent()[i + 16] == m_prevSecondLineContent[i])
            {
                secondLine += "#";
            }
            else
            {
                secondLine += m_menu->GetContent()[i + 16];
            }
        }
        else
        {
            secondLine += " ";
        }
    }

    for (int i = 0; i < 16 - secondLine.length(); i++)
    {
        secondLine += " ";
    }
    
    for (int i = 0; i < firstLine.length(); i++)
    {
        if(firstLine[i] != *"#")
        {
            m_lcd->setCursor(i, 0);
            m_lcd->write(firstLine[i]);
        }
    }

    
    for (int i = 0; i < secondLine.length(); i++)
    {
        if(secondLine[i] != *"#")
        {
            m_lcd->setCursor(i, 1);
            m_lcd->write(secondLine[i]);
        }
    }

    m_prevFirstLineContent = m_menu->GetContent();
    m_prevSecondLineContent = "";
    for (int i = 0; i < 16; i++)
    {
        if (m_menu->GetContent()[i + 16] == 0)
        {
            break;
        }
        m_prevSecondLineContent += m_menu->GetContent()[16 + i];
    }
}