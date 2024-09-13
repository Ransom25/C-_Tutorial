#include "oval.h"

int Oval::number_of_object{0};

Oval::Oval(double x_radius, double y_radius,
                std::string_view description)
    : Shape(description),m_x_radius(x_radius), m_y_radius(y_radius)
//Memeber initializer is the preferred way
//description is a base class protected member
//radius are protected class child member

{
    ++number_of_object;
}

Oval::~Oval()
{
    --number_of_object;
}

