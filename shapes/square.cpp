//
// Created by Timothy Wang on 2022-12-15.
//
#include "square.h"
#include "../visitors/AbstractShapeVisitor.h"

double Square::accept(AbstractShapeVisitor & v) {
    return v.visit(*this);
}

