// This program uses a constructor to initialize a member variable.
#include <iostream>
#include <cmath>
using namespace std;

// Circle class declaration
class Circle
{
private:
    double radius;

public:             // Member function prototypes
    Circle();
    void setRadius(double);
    double calcArea();
};

// Circle member function implementation section

/********************************************************
*                   Circle::Circle                      *
*   This is the constuctor.  It initializes the radius  *
*   class member variable                               *
********************************************************/
Circle::Circle() {
    radius = 1.0;
}

/********************************************************
*                   Circle::calcArea                    *
*   This function calculates and returns the Circle     *
*   object's area.  It does not need any parameters     *
*   because it can directly access the member variable  *
*   radius                                              *
********************************************************/
double Circle::calcArea() {
    return 3.14 * pow(radius, 2);
}

