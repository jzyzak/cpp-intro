#include "Line.hpp"
#include <cmath>

Line::Line(Point p1, Point p2) : _p1(p1), _p2(p2)
{
}

Point Line::get_p1()
{
    return _p1;
}

Point Line::get_p2()
{
    return _p2;
}

void Line::set_p1(Point p)
{
    _p1 = p;
}

void Line::set_p2(Point p)
{
    _p2 = p;
}

double Line::length()
{
    return _p1.distance_to_point(_p2);
}

double Line::distance_to_point(Point p)
{
    double x1 = p.get_x();
    double y1 = p.get_y();
    double a = _p1.get_y()-_p2.get_y();
    double b = -1*(_p1.get_x()-_p2.get_x());
    double c = _p1.get_x()*_p2.get_y()-_p2.get_x()*_p1.get_y();

    return (abs(a*x1+b*y1+c))/(sqrt(pow(a,2)+pow(b,2)));
}