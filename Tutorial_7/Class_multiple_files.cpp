#include <iostream>
#include "Constant.h"
#include "Class_definition.h"

int main() {
    //Object created on the stack
    Cylinder cyl_1(10,10);

    //Heap object
    Cylinder* cyl_2 = new Cylinder(11,20);
    auto result = cyl_2->volume(); //Pointer access notation

    delete cyl_2;
    cyl_2 = nullptr;

    return 0;
}