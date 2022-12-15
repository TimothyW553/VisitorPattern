//
// Created by Timothy Wang on 2022-12-15.
//

#ifndef VISITOR_SQUARE_H
#define VISITOR_SQUARE_H
#include "shape.h"

class Square : public Shape {
    double sideLength;
public:
    explicit Square(double sideLength) : Shape{}, sideLength{sideLength} {}
    double accept(AbstractShapeVisitor & v) override;
    double getSideLength() { return sideLength; }
    ~Square() {};
};

#endif //VISITOR_SQUARE_H
