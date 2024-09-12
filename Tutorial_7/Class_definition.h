#ifndef CLASS_DEFINITION_H
#define CONSTANT_H

#include "Constant.h"

class Cylinder {
    //Properties
    private :
            double base_radius {2};
            double height {5.5};

    //Behaviour
    public :
            //Constructor
            Cylinder() = default;
            Cylinder(double rad_param, double height_param);
            //Function declaration
            double volume();
            void set_base_radius(double rad_param);
};

#endif