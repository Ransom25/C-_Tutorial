#ifndef CIRCLE_H
#define CIRCLE_H
#include "oval.h"

/*
FINAL
* class Circle final: public Oval
* circle calss can't be derived
* 
*/
class Circle : public Oval
{
public:
    Circle() = default;
    Circle(double radius,std::string_view description);
    ~Circle();
    //Virtual is overriding the method we have in shape
    // override tells the compiler that we are overriding a method that exists in base class
    // if we have no method called draw in the base class we going to have a compile error so avoiding us errors
    // Override is a clirification of virtual method
    // It can be useful to explicitly tell the compiler that you are overrunning a base class function through virtual method
    // NB when you override a single method all the other overload are going to be hidden
    virtual void draw() const override{
        std::cout << "Circle::draw() called. Drawing " << m_description <<
            " with radius : " << get_x_rad() << std::endl;        
    }

    // Not present in base class (it has two arguments)
    // So it not participate polymorphism
    virtual void draw(int color, int number) const {
        std::cout << "Circle::draw() called. Drawing " << m_description <<
            " with radius : " << get_x_rad() << std::endl;        
    }

    void circle_function()
    {
        //circle function cannot be called by base pointer
    }



};

#endif // CIRCLE_H
