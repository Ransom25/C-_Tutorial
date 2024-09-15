#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <string_view>
#include <iostream>

class Shape
{
public:
    Shape() = default; // default construct
    Shape(std::string_view description); // custom constructor
    ~Shape(); // default constructor
    

    // Two overload of th Shape classes
    // NB virtual method must be specified in base class to be overriden
    // NO need to call virtual methods in derived class if it is final
    virtual void draw() const{  // getter
        std::cout << "Shape::draw(Color) called. Drawing " << m_description << std::endl;
    }

    void draw(int color_depth) const{  // getter
        std::cout << "Shape::draw(Color) called. Drawing " << m_description << std::endl;
    }

    virtual int get_count() const{
        return number_of_object;
    }

    virtual void base_function() final 
    {
        // final tell the compiler that the function cannot be ovveride
        // by derived classes

    }
    //static variable are shared between object of the class 
    static int number_of_object;

protected : 
/*
PROTECTION:
* Public: member ccessible everywhere
* Protected: member accessible only in derived classes
* Private: member accessible within the class only
*/
    std::string m_description{""};
};

#endif // SHAPE_H
