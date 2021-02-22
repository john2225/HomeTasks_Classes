#ifndef __Calculator__
#define __Calculator__
#include <iostream>

class Calculator
{
    
public:
    Calculator();
    ~Calculator() = default; /* c++11 */
    
    void SetNumbersAndSymbol(double x, double y, char ch);
    double ArithmeticOperations();
    
private:
    double m_x;
    double m_y;
    char m_symbol;
};

#endif
