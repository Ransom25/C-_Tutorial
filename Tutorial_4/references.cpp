#include <iostream>

int main() {
    //INITIALIZATION
    int int_value{15};
    int& ref_to_int{int_value};
    //Reference is an alias of the variable referenced, they have the same memory address
    //Modify one of the two modify both
    int_value = 55; // ref = 55
    ref_to_int = 65; // int_value = 65

    /*
    REFERENCES VS POINTERS
    REF:
    * do not use dereferencing for R/W
    * can't change ref to something else
    * must be initialized at declaration
    POINTERS:
    * dereference is needed for R/W
    * can be changed to point somewhere else
    * Can be declared uninitialized
    --> reference acts like const pointer but with a simpler syntax
    * a const reference can't be modified
    */
   double value{2.14};
   double& ref{value}; // can be modified
   const double ref_const{value}; //can't be modified but value can be modified


    return 0;
}