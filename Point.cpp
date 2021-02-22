#include "Point.h"

Point::Point()
{
    m_x = 0;
    m_y = 0;
}
Point::Point(int x, int y)
{
    m_x = x;
    m_y = y;
}

int Point::GetX() const
{
    return m_x;
}

int Point::GetY() const
{
    return m_y;
}

void Point::PrintCordinates()
{
    std::cout << "Cordinates are: (" << m_x << "," << m_y << ")" << std::endl;
}

void Line::AddLine(Point& StraightLine)
{
    m_StraightLine.push_back(StraightLine);
}

std::vector<Point> Line::GetLine() const
{
    return m_StraightLine;
}

void Line:: DisplayVectorContents()
{
    for(int i = 0; i < m_StraightLine.size(); ++i)
    {
        std::cout << "Cordinate " << i + 1 << " is: "
        << m_StraightLine[i].GetX() << "," << m_StraightLine[i].GetY() << std::endl;
    }
}









