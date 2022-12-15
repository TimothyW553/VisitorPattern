//
// Created by Timothy Wang on 2022-12-15.
//
#include "circle.h"
#include "../visitors/AbstractShapeVisitor.h"

double Circle::accept(AbstractShapeVisitor & v) {
    return v.visit(*this);
}
