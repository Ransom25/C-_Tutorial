#include <iostream>
#include <stdexcept>
using namespace std;
/*
EXCEPTION HANDLING
* The process of handling these exceptions is called exception handling. 
* Using the exception handling mechanism, the control from one part of the program 
* where the exception occurred can be transferred to another part of the code.
* So basically using exception handling in C++, we can handle the exceptions 
* so that our program keeps running.
* Why?
* Separation of Error Handling Code from Normal Code
* Functions/methods can handle only the expection they choose
* Grouping Error types
* USE EXCEPTION FOR EXCEPTIONAL SITUATION NOT NORMAL CONTROL FLOW
* THEY ARE USUALLY AVOIDED IN EMBEDDED PROGRAMMING
*/

int main() {

    // try block contains the code that might throw an exception
    try {
        int numerator = 10;
        int denominator = 1;
        int res;
 
        // check if denominator is 0 then throw runtime
        // error.
        if (denominator == 0) {
            throw runtime_error(
                //if an exception occurs in the try block it is thrown and control is transferred to the appropriate catch block.
                "Division by zero not allowed!");
        }
 
        // calculate result if no exception occurs
        res = numerator / denominator;
        //[printing result after division
        cout << "Result after division: " << res << endl;
    }
    // catch block to catch the thrown exception
    catch (const exception& e) {
        // print the exception
        cout << "Exception " << e.what() << endl;
    }

    return 0;
}