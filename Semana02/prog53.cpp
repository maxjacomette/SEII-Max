#include <cstdlib>
#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

#include "Shape.h"
#include "Circle.h"

using namespace std;

class Shape{
    public:
        virtual double Area() = 0;
};

class Circle : public Shape{
    protected:
        double width;
    public:
        Circle(double w){
            width = w;
        }
        double Area() override{
            return 3.14159 * pow(width / 2), 2);
        }
};

int main(int argc, char** argv){

    Shape square(10, 5);
    Circle circle(10);
    ShowArea(square);
    ShowArea(circle);

    return 0;
}

void ShowArea(Shape& shape){
    cout << Area : << shape.Area() << endl;
}