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

/********************************************************
*                   Main                                *
*   The main function creates and uses 2 circle objects *
********************************************************/

int main()
{
    // Define a Circle object.  Because the setRadius function
    // is never called for it, it will kep the value set
    // by the constructor.
    Circle circle1;

    // Define a second Circle object and set its radius to 2.5
    Circle circle2;
    circle2.setRadius(2.5);

    // Get and display each circle's area
    cout << "The area of circle1 is " << circle1.calcArea() << endl;
    cout << "The area of circle2 is " << circle2.calcArea() << endl;

    return 0;
}