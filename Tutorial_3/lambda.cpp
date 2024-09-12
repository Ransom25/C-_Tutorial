#include <iostream>
/*
LAMBDA FUNCTION: function without a name
* we can give the lmbda a name and call it
auto func = [] (input) {
std::cout << "Hello World!" << std::endl}

* we can directly call lambda function and return some values

[] (double a, double b) {
return a+b;
} (12.7, 13.2)

* we can use it inside other constructor
std::cout <<"result: " << [] (double a, double b)->double(return type) {
return a+b;
} (12.1, 23.4) << std::endl;
*/

int main() {
    // Give a name and call it
    auto func = [] () {
        std::cout << "Hello World!" << std::endl;
    };
    func(); // Hello World!
     
    // Declare and call it directly
    [] () {
        std::cout << "Hello World!" << std::endl;
    } (); // Hello World!
    //Call it only once then never again

    //Lambda function input and gives output (conditioned)
    auto func1 = [] (double a, double b)->int{
        return a+b;
    };
    int c = func1(0.1,0.2);

    /*
    CAPTURE LIST
    * get value declare outside the scope
    */
    int val{32};
    // By reference: value of the variable is changed
    auto func = [&c] () {
        std::cout <<"Inner value: " << c <<std::endl;
    };
    // By value: value of the variable not changed
    // [=] meand capture all the outside context by value
    // [&] capture by reference --> changed visible outside and contrary
    auto func_1 = [=] () {
        std::cout <<"Inner value: " << c <<std::endl;
    };






    

    return 0;
}