#include <iostream>
#include "Calculator.h"

void takingNumbersAndSymbol(double& a, double& b, char& ch);

int main()
{
    double firstNum;
    double secondNum;
    char symbol;
    takingNumbersAndSymbol(firstNum, secondNum, symbol);
    Calculator example;
    example.SetNumbersAndSymbol(firstNum, secondNum, symbol);
    double result = example.ArithmeticOperations();
    std::cout << "The result of operation is: " << result << std::endl;
    
    return 0;
}

void takingNumbersAndSymbol(double& a, double& b, char& ch)
{
    std::cout << "Number 1: ";
    std::cin >> a;
    std::cout << "Number 2: ";
    std::cin >> b;
    std::cout << "Enter arithmetic symbol: ";
    std::cin >> ch;
}

