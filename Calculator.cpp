#include "Calculator.h"

Calculator::Calculator()
{
    m_x = 0;
    m_y = 0;
    m_symbol = '\0';
}

void Calculator::SetNumbersAndSymbol(double x, double y, char ch)
{
    m_x = x;
    m_y = y;
    m_symbol = ch;
}

double Calculator::ArithmeticOperations()
{
    double result = 0;
    switch(m_symbol) {
        case '+':
            result = m_x + m_y;
            break;
        case '-':
            result = m_x - m_y;
            break;
        case '*':
            result = m_x * m_y;
            break;
        case '/':
            if(m_y != 0) {
                result = m_x / m_y;
            } else {
                std:: cout << "Second number can not be 0 when dividing" << std:: endl;
            }
            break;
        default:
            std:: cout << "Operation symbol is not correct!";
            break;
    }
    return result;
}
