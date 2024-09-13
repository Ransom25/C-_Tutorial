#ifndef OVAL_H
#define OVAL_H
#include "shape.h"
class Oval : public Shape  //Public inheritance of class Shape: memeber protection remains the same
{
public:
    Oval()= default;
    Oval(double x_radius, double y_radius,
                std::string_view description);
    ~Oval();
    
    virtual void draw() const{
        std::cout << "Oval::draw() called. Drawing " << m_description <<
            " with m_x_radius : " << m_x_radius << " and m_y_radius : " << m_y_radius 
                    << std::endl;
    }
    
    virtual int get_count()const override{
        return number_of_object;
    }
    //static variable are shared between object of the class 
    // even though we have a static object also in shape class
    // now it is maintained
    static int number_of_object;

protected:
    double get_x_rad() const{
        return m_x_radius;
    }
    
    double get_y_rad() const{
        return m_y_radius;
    }
 
private : 
    double m_x_radius{0.0};
    double m_y_radius{0.0};
};

#endif // OVAL_H
