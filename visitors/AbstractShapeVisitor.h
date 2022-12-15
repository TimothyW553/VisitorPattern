//
// Created by Timothy Wang on 2022-12-15.
//

#ifndef VISITOR_ABSTRACTSHAPEVISITOR_H
#define VISITOR_ABSTRACTSHAPEVISITOR_H

class Circle;
class Square;

class AbstractShapeVisitor {
public:
    virtual double visit(Circle & c) = 0;
    virtual double visit(Square & s) = 0;
    virtual ~AbstractShapeVisitor();
};

#endif //VISITOR_ABSTRACTSHAPEVISITOR_H
