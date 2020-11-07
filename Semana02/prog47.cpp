#include "Shape.h"

Shape::Shape(double length){
    this->height = length;
    this->width = length;
   
    Shape::numOfShapes++;
}
Shape::Shape(double height, double width){
    this->height = height;
    this->width = width;
    Shape::numOfShapes++;
}
 
Shape::~Shape() = default;

void Shape::SetHeight(double height){
    this->height = height;
}
double Shape::GetHeight(){
    return width = width;
}
void Shape::SetWidth(double width){this -> width = width;}

int Shape::GetNumOfShapes(){return numOfShapes;}
