#ifndef SHAPE_H
#define SHAPE_H

class SHAPE_H{
protected:
    double height;
    double width;
public:
    Shape();
    Shape(const Shape& orig);
    virtual ~Shape();
private:

};

#endif /* SHAPE_H */