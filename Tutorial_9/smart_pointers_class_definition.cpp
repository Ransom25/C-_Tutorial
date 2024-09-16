/*
SMART POINTERS
can be used to overcome the problem typical of standard pointers like:
* Memory leaks (memory never freed)
* Dangling pointers
*/
#include <iostream>
using namespace std;

class SmartPtr {
    int* ptr; // Actual pointer
public:
    // Constructor: Refer
    // Explicit keyword is used to avoi automatic type conversion
    explicit SmartPtr(int* p = NULL) { ptr = p; }

    // Destructor
    ~SmartPtr() { delete (ptr); }

    // Overloading dereferencing operator
    int& operator*() { return *ptr; }
};

// A generic smart pointer class
template <class T> class SmartPtr_template {
    T* ptr; // Actual pointer
public:
    // Constructor
    explicit SmartPtr_template(T* p = NULL) { ptr = p; }

    // Destructor
    ~SmartPtr_template() { delete (ptr); }

    // Overloading dereferencing operator
    T& operator*() { return *ptr; }

    // Overloading arrow operator so that
    // members of T can be accessed
    // like a pointer (useful if T represents
    // a class or struct or union type)
    T* operator->() { return ptr; }
};

int main()
{
    SmartPtr ptr(new int());
    *ptr = 20;
    cout << *ptr;

    // We don't need to call delete ptr: when the object
    // ptr goes out of scope, the destructor for it is
    // automatically called and destructor does delete ptr.

    return 0;
}