#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <array>
#include "Point.hpp"
#include "Line.hpp"
#include "Triangle.hpp"
#include "Polygon.hpp"
#include "AUV.hpp"


// function definition
int add(int x, int y)
{
  return x + y;
}

int subtract(int x, int y)
{
  return x - y;
}

int multiply(int x, int y)
{
  return x * y;
}

int divide(int x, int y)
{
  if (y == 0)
  {
    throw std::invalid_argument("y cannot be 0.");
  }
  return x / y;
}

class Circle
{
  private:
    double radius;

  public:

    Circle(double r)
    {
      radius = r;
    }
    
    double area()
    {
      return M_PI*radius*radius;
    }
};

/*class Point
{
  private:
    // double x and y data attributes that represent the x and y coordinates of the point
    double x;
    double y;

  public:
    // Default Constructor
    Point()
    {
      x = 0.0;
      y = 0.0;
    }
    // Constructor
    Point(double x, double y)
    {
      this->x = x;
      this->y = y;
    }

    // getter and setter methods for x
    double get_x()
    {
      return x;
    }

    void set_x(double x)
    {
      this->x = x;
    }

    // getter and setter methods for y
    double get_y()
    {
      return y;
    }
    
    void set_y(double y)
    {
      this->y = y;
    }

    // Calculates and returns the distance from the point to the origin
    double distance_to_origin()
    {
      return sqrt(x*x + y*y);
    }

    // Calculates and returns the distance from the point to another Point p
    double distance_to_point(Point p)
    {
      double x_distance = x - p.x;
      double y_distance = y - p.y;
      return sqrt(pow(x_distance, 2) + pow(y_distance, 2));
    }
};*/

/*class Line
{
  private:
    // Point p1 and p2 data attributes that represent the endpoints of the line
    Point p1;
    Point p2;
  public:
    Line()
    {
      p1
    }

    // Constructor
    Line(Point p1, Point p2)
    {
      this->p1 = p1;
      this->p2 = p2;
    }

    // getter and setter methods for Point p1
    Point get_p1()
    {
      return p1;
    }

    void set_p1(Point p)
    {
      p1 = p;
    }

    // getter and setter methods for Point p2
    Point get_p2()
    {
      return p2;
    }

    void set_p2(Point p)
    {
      p2 = p;
    }

    // Calculates and returns the length of the line, which is just the distance between the two endpoints
    double length()
    {
      return p1.distance_to_point(p2);
    }

    // Calculates and returns the distance from the line to a Point p
    double distance_to_point(Point p)
    {
      double x1 = p.get_x();
      double y1 = p.get_y();
      double a = p1.get_y()-p2.get_y();
      double b = -1*(p1.get_x()-p2.get_x());
      double c = p1.get_x()*p2.get_y()-p2.get_x()*p1.get_y();

      return (abs(a*x1+b*y1+c))/(sqrt(pow(a,2)+pow(b,2)));
    }
};*/

/*class Triangle
{
  private:
    // Point p1, p2, and p3 data attributes that represent the vertices of the triangle
    Point p1;
    Point p2;
    Point p3;

  public:
    // Constructor
    Triangle(Point p1, Point p2, Point p3)
    {
      this->p1 = p1;
      this->p2 = p2;
      this->p3 = p3;
    }

    // getter and setter methods for Point p1
    Point get_p1()
    {
      return p1;
    }

    void set_p1(Point p)
    {
      p1 = p;
    }

    // getter and setter methods for Point p2
    Point get_p2()
    {
      return p2;
    }

    void set_p2(Point p)
    {
      p2 = p;
    }

    // getter and setter methods for Point p3
    Point get_p3()
    {
      return p3;
    }

    void set_p3(Point p)
    {
      p3 = p;
    }

    // calculates the area of the triangle using Heron's formula
    double area()
    {
      double a = sqrt(pow((p1.get_x()-p2.get_x()),2) + pow((p1.get_y()-p2.get_y()),2));
      double b = sqrt(pow((p1.get_x()-p3.get_x()),2) + pow((p1.get_y()-p3.get_y()),2));
      double c = sqrt(pow((p2.get_x()-p3.get_x()),2) + pow((p2.get_y()-p3.get_y()),2));
      double semi_perim = (a+b+c)/2;

      double area = sqrt(semi_perim*(semi_perim-a)*(semi_perim-b)*(semi_perim-c));
      return area;
    }
};*/

/*class Polygon
{
  private:
    std::vector<Point> p;
  public:
    // Constructor
    Polygon(std::vector<Point> p)
    {
      this->p = p;
    }

    // getter and setter methods for p
    std::vector<Point> get_p()
    {
      return p;
    }

    void set_p(std::vector<Point> p)
    {
      this->p = p;
    }

    // calculates and returns the area of the polygon by splitting it up into smaller triangles and calculating the areas of those triangles
    double area()
    {
      double polygon_area = 0.0;
      for(int i = 0; i < p.size()-2; i++)
      {
        Triangle a(p[0], p[i+1], p[i+2]);
        polygon_area += a.area();
      }
      return polygon_area;
    }

    // calculates and returns the perimeter of the polygon
    double perimeter()
    {
      double perimeter = 0.0;
      Line last_side(p[0], p[p.size()-1]);
      perimeter+= last_side.length();

      for(int i = 0; i < p.size()-1; i++)
      {
        Line l(p[i], p[i+1]);
        perimeter += l.length();
      }

      return perimeter;
    }
};*/

/*class AUV
{
  private:
    // AUV data attributes
    std::string name;
    Point position;
    double depth;
    double heading;
    std::array<double, 3> speed;
    double angular_speed;

  public:
    // Constructor
    AUV(std::string n, Point p, double d, double h, std::array<double, 3> s, double a_s)
    {
      name = n;
      position = p;
      depth = d;
      heading = h;
      speed = s;
      angular_speed = a_s;
    }

    // getter and setter methods for the name of the AUV
    std::string get_name()
    {
      return name;
    }

    void set_name(std::string n)
    {
      name = n;
    }

    // getter and setter methods for the position of the AUV
    Point get_position()
    {
      return position;
    }

    void set_position(Point p)
    {
      position = p;
    }

    // getter and setter methods for the depth of the AUV
    double get_depth()
    {
      return depth;
    }

    void set_depth(double d)
    {
      depth = d;
    }

    // getter and setter methods for the heading of the AUV
    double get_heading()
    {
      return heading;
    }

    void set_heading(double h)
    {
      heading = h;
    }

    // getter and setter methods for the speed of the AUV
    std::array<double, 3> get_speed()
    {
      return speed;
    }

    void set_speed(std::array<double, 3> s)
    {
      speed = s;
    }

    // getter and setter methods for the angular speed of the AUV
    double get_angular_speed()
    {
      return angular_speed;
    }

    void set_angular_speed(double a_s)
    {
      angular_speed = a_s;
    }

    // Simulates a change in the AUV's position
    void step(const double &dt)
    {
      // use getter/setter methods to make simpler
      Point p(position.get_x()+speed[0]*dt, position.get_y()+speed[1]*dt);
      position = p;
      depth += speed[2] * dt;
      heading += angular_speed*dt;
    }

    //add references and const to rest of stuff
    // Simulates the AUV accelerating
    void apply_acceleration(const std::array<double, 3> &accel, const double &dt)
    {
      speed[0] += accel[0] * dt;
      speed[1] += accel[1] * dt;
      speed[2] += accel[2] * dt;
    }

    // Simulates the AUV angularly accelerating
    void apply_angular_acceleration(const double &angular_acceleration, const double &dt)
    {
      angular_speed += angular_acceleration * dt;
    }
};*/

int main()
{
  // Introduction Stuff
  /*std::cout << "Hello, world!" << std::endl;

  int x = 5;
  int y = 7;
  std::cout << "The sum of " << x << " and " << y << " is " << x + y << std::endl;

  std::cout <<"My name is Joshua Zyzak." << std::endl;
  std::cout << "My classroom is Room 115 in Building 24." << std::endl;
  
  int z = 9;
  std::cout << "The sum of " << x << ", " << y << ", and " << z << " is " << x + y + z << std::endl;
  
  int w = 11;
  std::cout << "The product of " << x << ", " << y << ", " << z << ", and " << w << " is " << x * y * z * w << std::endl;

  int v = 1;
  std::cout << "The division of " << x << ", " << y << ", and " << v << " is " << x / y / v << std::endl;

  std::cout << "10 + 5 = " << add(10, 5) << std::endl;
  std::cout << "12 - 5 = " << subtract(12, 5) << std::endl;
  std::cout << "10 * 5 = " << multiply(10, 5) << std::endl;
  std::cout << "10 / 5 = " << divide(10, 5) << std::endl;
  std::cout << "10 / 0 " << divide(10, 0) << std::endl;
  Circle c(5.0);
  std::cout << "The area of a circle with radius 5.0 is " << c.area() << std::endl;*/



  // Tests with the Point class (Problems 1 and 2)
  Point p1(-2, 2);
  Point p2(2, 2);

  // Prints the distance from the points to the origin
  std::cout << "Distance from Point p1 to the origin: " << p1.distance_to_origin() << std::endl;
  std::cout << "Distance from Point p2 to the origin: " << p2.distance_to_origin() << std::endl;

  // Prints the distance between the points
  std::cout << "Distance from Point p1 to Point p2: " << p1.distance_to_point(p2) << std::endl;
  std::cout << "Distance from Point p2 to Point p1: " << p2.distance_to_point(p1) << std::endl;

  // Tests with the Line class (Problems 3 and 4)
  Line l(p1, p2);
  Point p3(-1, 1);

  // Prints the distance between Line l and Point p3
  std::cout << "Distance from Line l to Point p3: " << l.distance_to_point(p3) << std::endl;

  // Tests with the Polygon and Triangle classes (Problems 6, 7, and 8)

  Point hex_vertex1(-4, 4);
  Point hex_vertex2(-2, 4);
  Point hex_vertex3(-1, 2);
  Point hex_vertex4(-2, 0);
  Point hex_vertex5(-4, 0);
  Point hex_vertex6(-5, 2);
  std::vector<Point> hexagon_points = {hex_vertex1, hex_vertex2, hex_vertex3, hex_vertex4, hex_vertex5, hex_vertex6};
  Polygon hexagon(hexagon_points);

  // Prints the area of the hexagon
  std::cout << "The area of the hexagon is " << hexagon.area() << std::endl;

  // Prints the perimeter of the hexagon
  std::cout << "The perimeter of the hexagon is " << hexagon.perimeter() << std::endl;
}