#include "Triangle.hpp"
#include <cmath>

Triangle::Triangle(Point p1, Point p2, Point p3) : _p1(p1), _p2(p2), _p3(p3)
{
}

Point Triangle::get_p1()
{
    return _p1;
}

Point Triangle::get_p2()
{
    return _p2;
}

Point Triangle::get_p3()
{
    return _p3;
}

void Triangle::set_p1(Point p)
{
    _p1 = p;
}

void Triangle::set_p2(Point p)
{
    _p2 = p;
}

void Triangle::set_p3(Point p)
{
    _p3 = p;
}

double Triangle::area()
{
    double a = sqrt(pow((_p1.get_x()-_p2.get_x()),2) + pow((_p1.get_y()-_p2.get_y()),2));
    double b = sqrt(pow((_p1.get_x()-_p3.get_x()),2) + pow((_p1.get_y()-_p3.get_y()),2));
    double c = sqrt(pow((_p2.get_x()-_p3.get_x()),2) + pow((_p2.get_y()-_p3.get_y()),2));
    double semi_perim = (a+b+c)/2;

    double area = sqrt(semi_perim*(semi_perim-a)*(semi_perim-b)*(semi_perim-c));
    return area;
}