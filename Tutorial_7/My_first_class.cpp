#include <iostream>
#include "Constant.h"

const double PI {3.14159265};

/*
CLASS DEFINITION
* Public: member can be accessed outside of the class
* Private attribute or function cannot be accessed outside
* memeber are private by default, they can be made public
* member cannot be references since they must be initialized
* function(method) has access to classes variable either theyìre private or public
* if you don't have any constructro the compiler generate  default constructor
*/
class Cylinder {
    //Properties
    private :
            double base_radius {2};
            double height {5.5};

    //Behaviour
    public :
            //Constructors have to be public 
            Cylinder(){
                    base_radius = 2.0;
                    height = 4.0;
            };
            //Default constructor is also possible
            //Cylinder default;

            Cylinder (double radius_param, double height_param) {
                    base_radius = radius_param;
                    height = height_param;
            }
            
            /*
            Functions can be classified as getters or setters
            */
            double volume() { //getters
                return PI * base_radius * base_radius * height;
            }
};


int main() {
    /*
    Classes use
    */
    Cylinder cyl_1; //object
    //cyl_1.base_radius = 2.5; //private: cannot be modfied
    //cyl_1.height = 10.0;
    double vol = cyl_1.volume();

    Cylinder cyl_2; //object
    double result = cyl_2.volume(); // since class has a constructor V = 8.0;

    Cylinder cyl_3(5.0,4.0); //Initialized using constructors



    std::cout << "Hello World!" << std::endl;
    
    return 0;
}

