#include "Point.hpp"
#include <cmath>

Point::Point(double x, double y)
{
  this->m_d_x = x;
  this->m_d_y = y;
}

double Point::get_x()
{
    return this->m_d_x;
}

double Point::get_y()
{
    return this->m_d_y;
}

void Point::set_x(double x)
{
    this->m_d_x = x;
}

void Point::set_y(double y)
{
    this->m_d_y = y;
}

double Point::distance_to_origin()
{
  return std::sqrt(std::pow(m_d_x, 2)  + std::pow(m_d_y, 2));
}

double Point::distance_to_point(Point p)
{
  return std::sqrt(std::pow(m_d_x - p.get_x(), 2)  + std::pow(m_d_y - p.get_y(), 2));
}