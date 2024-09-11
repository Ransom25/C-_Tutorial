#include <iostream>
#include <cstring>

//INT FUNCTION
int max (int a, int b) {
    if (a>b) {
        return a;
    }
    else {
        return b;
    }
}

//DOUBLE FUNCTION
double max (double a, double b) {
    if (a>b) {
        return a;
    }
    else {
        return b;
    }
}

/*
Ovverload flexibility
* return type does not let overload flexibility
* input type does let overload flexibility
* input argument number
*/

/*
FUNCTION TEMPLATES
* used to solve overload and code repetition
* it looks at input and expected aoutput so compiler can create the right function object
* consult cppinsight.io to know how compiler works
*/
template <typename T>
T maximum (T a, T b) {
    return (a > b) ? a : b;
}

/*
Template type paramters by reference
*/
template <typename T> const T&
minimum (const T& a, const T& b) {
    return (a > b) ? a : b;
}

/*
TEMPLATE SPECIALIZATION
Can be handy if you are dealing with pointers
*/
template <>
const char* maximum <const char*> (const char* a, const char* b) {
    return  (std::strcmp(a,b)>0) ? a: b;
}

int main() {
    int a =2, b=10;
    double c = 1.2, d = 4.5;
    auto result = maximum(a,b);
    //explicit template arguments
    auto result_1 = maximum<double>(a,d);
    //passing by reference is the same
    auto result_2 = minimum(a,b);

    //template specialization
    const char* g("wild");
    const char* h("animal");
    auto result = maximum(g,h);
    //Error: it return the greater pointer. Specialization is needed
    //Compiler knows that the function specialization is better in this case
    auto result = maximum(g,h);
    return 0;
}