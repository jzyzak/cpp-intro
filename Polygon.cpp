#include "Polygon.hpp"
#include <cmath>

Polygon::Polygon(std::vector<Point> p) : _p(p)
{
}

std::vector<Point> Polygon::get_p()
{
    return _p;
}

void Polygon::set_p(std::vector<Point> p)
{
    _p = p;
}

double Polygon::area()
{
    double polygon_area = 0.0;
    for(int i = 0; i < _p.size()-2; i++)
    {
        Triangle a(_p[0], _p[i+1], _p[i+2]);
        polygon_area += a.area();
    }
    return polygon_area;
}

double Polygon::perimeter()
{
    double perimeter = 0.0;
    Line last_side(_p[0], _p[_p.size()-1]);
    perimeter+= last_side.length();

    for(int i = 0; i < _p.size()-1; i++)
    {
        Line l(_p[i], _p[i+1]);
        perimeter += l.length();
    }

    return perimeter;
}

