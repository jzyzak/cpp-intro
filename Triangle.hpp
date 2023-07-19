#pragma once
#include "Point.hpp"

class Triangle
{
    private:
        Point _p1;
        Point _p2;
        Point _p3;

    public:
        Triangle(Point p1, Point p2, Point p3);
        //Point p1(){return _p1;}
        //Point p2(){return _p2;}
        //Point p3(){return _p3;}
        Point get_p1();
        Point get_p2();
        Point get_p3();
        void set_p1(Point p);
        void set_p2(Point p);
        void set_p3(Point p);
        double area();
};