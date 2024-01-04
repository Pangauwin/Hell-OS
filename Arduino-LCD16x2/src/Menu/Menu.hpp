#pragma once
class Menu
{
public:
    Menu();
    Menu(const char* _content);
    Menu(const char* _content, int _linesNumber);
    void SetContent(const char* _content);
    char* GetContent();
    void SetFirstLine(const char* _content);
    void SetSecondLine(const char* _content);
    void Clear();
private:
    char* m_content;
    int m_linesNumber;
    int m_columnNumber;
};