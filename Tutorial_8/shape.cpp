#include "shape.h"

int Shape::number_of_object{0};

Shape::Shape(std::string_view description) 
    : m_description(description)  
// : The initializer list is preferred over assignment inside the constructor body 
//   because it directly initializes the member variables, making the code more efficient.
// More efficient than initialization inside the body of the constructor
{
    // More efficient than initialization inside the body of the constructor
    // If initialized inside the body:
    // 1) Empty default string is initialized
    // 2) String is populated
    ++number_of_object;
}

Shape::~Shape()
{
    --number_of_object;
}

