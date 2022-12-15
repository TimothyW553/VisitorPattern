//
// Created by Timothy Wang on 2022-12-15.
//
#include "CubeVisitor.h"
#include "../shapes/circle.h"
#include "../shapes/square.h"

double CubeVisitor::visit(Circle & c) {
    return c.getRadius() * c.getRadius() * c.getRadius();
}

double CubeVisitor::visit(Square & s) {
    return s.getSideLength() * s.getSideLength() * s.getSideLength();
}
