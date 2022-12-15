//
// Created by Timothy Wang on 2022-12-15.
//

#ifndef VISITOR_AREAVISITOR_H
#define VISITOR_AREAVISITOR_H

#include "AbstractShapeVisitor.h"

class AreaVisitor : public AbstractShapeVisitor {
public:
    double visit(Circle & c) override;
    double visit(Square & s) override;
};

#endif //VISITOR_AREAVISITOR_H
