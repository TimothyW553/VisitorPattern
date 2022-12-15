//
// Created by Timothy Wang on 2022-12-15.
//

#ifndef VISITOR_CUBEVISITOR_H
#define VISITOR_CUBEVISITOR_H
#include "AbstractShapeVisitor.h"

class CubeVisitor : public AbstractShapeVisitor {
public:
    double visit(Circle & c) override;
    double visit(Square & s) override;
};

#endif //VISITOR_CUBEVISITOR_H
