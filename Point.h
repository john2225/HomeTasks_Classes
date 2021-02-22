#ifndef __Point__
#define __Point__
#include <iostream>
#include <vector>

class Point
{
public:
    Point();
    Point(int x, int y);
    ~Point() = default; /*c++ 11*/
    
    int GetX() const;
    int GetY() const;
    void PrintCordinates();
    
private:
    int m_x;
    int m_y;
};

class Line
{
public:
    Line() = default; /* c++ 11*/
    ~Line() = default; /* c++ 11 */
    
    void AddLine(Point& StraightLine);
    std::vector<Point> GetLine() const;
    void DisplayVectorContents();

    
private:
    std::vector<Point> m_StraightLine;
};

#endif
