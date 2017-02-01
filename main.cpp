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

