#include "AUV.hpp"
#include <vector>
#include <cmath>
#include <array>
#include <string>

AUV::AUV(std::string name, Point position, double depth, double heading, std::array<double, 3> speed, double angular_speed) : _name(name), _position(position), _depth(depth), _heading(heading), _speed(speed), _angular_speed(angular_speed)
{
}

std::string AUV::get_name()
{
    return _name;
}

Point AUV::get_position()
{
    return _position;
}

double AUV::get_depth()
{
    return _depth;
}

double AUV::get_heading()
{
    return _heading;
}

std::array<double, 3> AUV::get_speed()
{
    return _speed;
}

double AUV::get_angular_speed()
{
    return _angular_speed;
}

void AUV::set_name(std::string n)
{
    _name = n;
}

void AUV::set_position(Point p)
{
    _position = p;
}

void AUV::set_depth(double d)
{
    _depth = d;
}

void AUV::set_heading(double h)
{
    _heading = h;
}

void AUV::set_speed(std::array<double, 3> s)
{
    _speed = s;
}

void AUV::set_angular_speed(double a_s)
{
    _angular_speed = a_s;
}

void AUV::step(const double &dt)
{
    Point p(_position.get_x()+_speed[0]*dt, _position.get_y()+_speed[1]*dt);
    _position = p;
    _depth += _speed[2] * dt;
    _heading += _angular_speed*dt;
}

void AUV::apply_acceleration(const std::array<double, 3> &accel, const double &dt)
{
    _speed[0] += accel[0] * dt;
    _speed[1] += accel[1] * dt;
    _speed[2] += accel[2] * dt;
}

void AUV::apply_angular_acceleration(const double &angular_acceleration, const double &dt)
{
    _angular_speed += angular_acceleration * dt;
}