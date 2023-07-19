#pragma once
#include "Point.hpp"
#include <vector>
#include <string>
#include <array>

class AUV
{
    private:
        std::string _name;
        Point _position;
        double _depth;
        double _heading;
        std::array<double, 3> _speed;
        double _angular_speed;

    public:
        AUV(std::string name, Point position, double depth, double heading, std::array<double, 3> speed, double angular_speed);
        std::string get_name();
        Point get_position();
        double get_depth();
        double get_heading();
        std::array<double, 3> get_speed();
        double get_angular_speed();
        void set_name(std::string n);
        void set_position(Point p);
        void set_depth(double d);
        void set_heading(double h);
        void set_speed(std::array<double, 3> s);
        void set_angular_speed(double a_s);
        void step(const double &dt);
        void apply_acceleration(const std::array<double, 3> &accel, const double &dt);
        void apply_angular_acceleration(const double &angular_acceleration, const double &dt);
};