//
// Created by Timothy Wang on 2022-12-15.
//

#ifndef VISITOR_CIRCLE_H
#define VISITOR_CIRCLE_H
#include "shape.h"

class Circle : public Shape {
    double radius;
public:
    explicit Circle(double radius) : Shape{}, radius{radius} {}
    double accept(AbstractShapeVisitor & v) override;
    double getRadius() { return radius; }
    ~Circle() {};
};

#endif //VISITOR_CIRCLE_H
