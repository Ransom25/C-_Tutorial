#include "Class_definition.h"

Cylinder::Cylinder (double radius_param, double height_param) {
                    base_radius = radius_param;
                    height = height_param;
            }
/*
Functions can be classified as getters or setters
*/
double Cylinder::volume() { //getters
    return PI * base_radius * base_radius * height;
    }

void Cylinder::set_base_radius(double rad_param) {
    base_radius = rad_param;
}