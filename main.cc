#include <iostream>
#include <vector>

using namespace std;

#include "shapes/shape.h"
#include "shapes/circle.h"
#include "shapes/square.h"
#include "visitors/AbstractShapeVisitor.h"
#include "visitors/AreaVisitor.h"
#include "visitors/CubeVisitor.h"

int main() {
    vector<Shape *> shapes = {
        new Circle{5},
        new Circle{2},
        new Square{1},
        new Circle{9},
        new Square{90}
    };

    AreaVisitor areaCalculator;
    CubeVisitor cubeCalculator;

    for (auto shape : shapes) {
        cout << "The area of this shape is: " << shape->accept(areaCalculator) << endl;
        cout << "The cube of its dimensions is: " << shape->accept(cubeCalculator) << endl;
    }

    return 0;
}