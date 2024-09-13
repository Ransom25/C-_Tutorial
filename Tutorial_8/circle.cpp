#include "circle.h"

Circle::Circle(double radius , std::string_view description) 
    : Oval(radius,radius,description)
/*
ACCESSING PRIVATE MEMBER OF PARENT
* private members of parent class are not accessible in general
* They can only be accessible during construction
* When you use an initializer list in a derived class constructor to call a base class constructor, 
* you are not directly accessing the private members of the base class. 
* Instead, you are invoking the base class constructor to properly initialize its internal state.
*/
{
}

Circle::~Circle()
{
}

