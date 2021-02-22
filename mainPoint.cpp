#include <iostream>
#include "Point.h"
#include "helpersPoint.h"


int main()
{
    int x_cordinate;
    int y_cordinate;
    
    fillCordinates(x_cordinate, y_cordinate);
    Point axis(x_cordinate, y_cordinate);
    axis.PrintCordinates();
    
    fillCordinates(x_cordinate, y_cordinate);
    Point axis_2(x_cordinate, y_cordinate);
    axis_2.PrintCordinates();
    
    Line first;
    first.AddLine(axis);
    first.AddLine(axis_2);
    
    first.DisplayVectorContents();
    return 0;
}
