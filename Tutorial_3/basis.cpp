#include <iostream>
using namespace std;

void pass_by_value (int value) {
    value = 30;
}

void pass_by_pointer (int* ptr) {
    *ptr = 50;
}

void print_string(string str) {
    cout << str << endl;
}

void print_string_ref(const string& str) {
    cout << str << endl; 
}

void print_string_pointer(const string* str) {
    cout << *str << endl; 
}

int* createArray(int size) {
    int* arr = new int[size]; // Dynamically allocate memory for an array
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 10; // Initialize array elements
    }
    return arr; // Return the pointer to the array
}

/*
FUNCTION OVERLOADING
* Function Overloading is defined as the process of having two or more functions with the same name
* but different parameters. 
* In function overloading, the function is redefined by using either different types or number of arguments. 
* It is only through these differences a compiler can differentiate between the functions.
*/

int main() {
    
    int x = 20;
    /*
    PASSING INT
    */
    //pass by value
    pass_by_value(x);
    cout << x << endl; // x = 20;

    //pass by reference
    pass_by_pointer(&x);
    cout << x << endl; // x = 50

    /*
    PASSING STRING
    */

    //pass a string by value
    string myString = "Hello!";
    print_string(myString);
    // pass by reference 
    print_string_ref(myString);
    // pass by pointer
    print_string_pointer(&myString);

    /*
    RETURN
    * It is possible to return a String object
    * it is possible to return a pointer/array
    */
    int* myArray = createArray(5);
    delete[] myArray; // Don't forget to free the allocated memory

    return 0;
}
