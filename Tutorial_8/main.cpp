#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

void draw_circle(const Circle& circle){
    circle.draw();
}

void draw_oval(const Oval& oval){
    oval.draw();
}
// More functions as you deal with more shape types. 30 ? 70? 100? It's messy.

void draw_shape_pointer(Shape* s) {
    s->draw();
}

void draw_shape_ref (const Shape& s) {
    s.draw();
}

int main(){

    Shape shape1("Shape1");
    //shape1.draw();

    Oval oval1(2.0,3.5,"Oval1");
    //oval1.draw();

    Circle circle1(3.3,"Circle1");
    //circle1.draw();

    //Base pointers
    Shape * shape_ptr = &shape1;
    //shape_ptr->draw();

    shape_ptr = &oval1;
    //shape_ptr->draw(); // Draw an oval

    shape_ptr = &circle1;
    //shape_ptr->draw();


    //Base references
    Shape& shape_ref = circle1;
    //shape_ref.draw();


    //Drawing shapes
    //draw_circle(circle1);
    //draw_oval(oval1);



    //Shapes stored in collections
     Circle circle_collection[]{circle1,Circle(10.0,"Circle2"),Circle(20.0,"Circle3")};
     Oval oval_collection[]{oval1,Oval(22.3,51.1,"Oval2")};
     //More arrays as you have more shape types, 100? Messy right?
     
    /*
    Print shape in a for loop using Array pointers 
    */
    Shape* shape_collection[] {&shape1,&oval1,&circle1};
    // Can't assign collection of references
    // The reason is that array element are not left assignable
    // A reference is already assigned and can't be reisigned, this is the reason

    for (Shape* s_ptr : shape_collection) {
        s_ptr->draw();
    }
    /*
    Without virtual function assignation the output is:
    [ Shape draw function is called for every object ]
    Shape::draw() called. Drawing Shape1
    Shape::draw() called. Drawing Oval1
    Shape::draw() called. Drawing Circle1
    */

   /*
   DYNAMIC BINDING
   By using the virtual function initiliazer, the compiler look at the type of
   pointer and called the function referred to it
   */

   //Let's try with functions
   Circle circol_new(2.2,"New Circle");
   Circle circol_new_2(2.2*2,"New Circle");
   Shape* shape_pointer = &circol_new;
   Shape& shape_ref_2 = circol_new_2;
   draw_shape_pointer(shape_pointer);
   draw_shape_ref(circol_new_2); 


    /*
    DYNAMIC BINDING MEMORY
    * Size of object using dynamic binding is much larger than expected
    * So it can pose several problem in embdded c++
    */

   /*
   SLICING
   */
   Circle circle3(3.3,"Circle3");
   Shape shape4 = circle3;
   shape4.draw(); // it will call shape draw function _ no dynamic binding without reference or poinmters
                  // The compiler automaticcaly cut-off unecessary avoiding polymorphism
    

    /*
    Polymorphism with static members
    */
    std::cout << "shape count : " << Shape::number_of_object << std::endl;
    std::cout << "ellipse count : " << Oval::number_of_object << std::endl;
    //See how many object are declared to check
    std::cout  << "***********************************************" << std::endl;

     //Shape polymorphism

    Shape* shapes[] {&shape1,&oval1};
    for(auto &s : shapes){
        std::cout << "count : " << s->get_count() << std::endl;
    }
    //here you have the same count even if you change array member
   
    return 0;
}