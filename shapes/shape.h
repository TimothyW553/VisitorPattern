//
// Created by Timothy Wang on 2022-12-15.
//

#ifndef VISITOR_SHAPE_H
#define VISITOR_SHAPE_H

class AbstractShapeVisitor;

class Shape {
public:
    explicit Shape() {}
    virtual double accept(AbstractShapeVisitor & v) = 0;
    virtual ~Shape();
};

#endif //VISITOR_SHAPE_H
