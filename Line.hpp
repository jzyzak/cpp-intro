#pragma once
#include "Point.hpp"
class Line
{
    private:
        Point _p1;
        Point _p2;

    public:
        Line(Point p1, Point p2);
        //Point p1(){return _p1;}
        //Point p2(){return _p2;}
        Point get_p1();
        Point get_p2();
        void set_p1(Point p);
        void set_p2(Point p);
        double length();
        double distance_to_point(Point p);
};