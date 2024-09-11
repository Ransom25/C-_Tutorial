#include <iostream>
using namespace std;
/*
BUTFIELDS APPLICATIONS
* memory optimization, reduce memory overload
* faster time to transfer data
* hardware registers settings
* graphic application (pixel etc...)
*/

// Define a struct without bit fields
struct Loan1 {
    unsigned int principal;
    unsigned int interestRate;
    unsigned int period;
};
 
// Define a struct with bit-fields
struct Loan2 {
    // principal variable can store maximum value of
    // 1,048,575
    unsigned int principal : 20;
    // Maximum interest rate of 63
    unsigned int interestRate : 6;
    // Maximum period of 63 months
    unsigned int period : 6;
};

int main()
{
    // printing the size of both structures
    cout << "Size of Structure without Bit Fields: ";
    cout << sizeof(Loan1) << " Bytes" << endl; // 12 bytes
    cout << "Size of Structure with Bit Fields: ";
    cout << sizeof(Loan2) << " Bytes" << endl; // 4 bytes
    return 0;
}