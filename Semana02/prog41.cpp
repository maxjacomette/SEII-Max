#ifndef SHAPE_H
#define SHAPE_H

class SHAPE_H{
protected:
    double height;
    double width;
public:
    static int numOfShapes;
    Shape(double length);
    Shape(double height, double width);
    Shape();

    virtual ~Shape();
private:

};

#endif /* SHAPE_H */