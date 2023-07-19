#pragma once
#include "Line.hpp"
#include "Triangle.hpp"
#include <vector>

class Polygon
{
    private:
        std::vector<Point> _p;

    public:
        Polygon(std::vector<Point> p);
        std::vector<Point> get_p();
        void set_p(std::vector<Point> p);
        double area();
        double perimeter();
};