//
// Created by Timothy Wang on 2022-12-15.
//
#include "AreaVisitor.h"
#include "../shapes/circle.h"
#include "../shapes/square.h"

double AreaVisitor::visit(Circle & c) {
    return 3.14 * c.getRadius() * c.getRadius();
}

double AreaVisitor::visit(Square & s) {
    return s.getSideLength() * s.getSideLength();
}
