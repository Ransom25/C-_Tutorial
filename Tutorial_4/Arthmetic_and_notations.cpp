#include <iostream>

int main() {
    
    std::cout << "Hello World!" << std::endl;
    /*
    POINTERS ARITHMETIC
    */
    int v[3] = { 10, 100, 200 };
    int* ptr; // = &v[0]
    // *ptr == 10
    // *ptr++ = 100 ... etc
    // Substraction between two pointer can be done only when both pointers are of the same data type.
    int num = 45;

    int* ptr1 = &num;

    // Adding 4 to ptr1 and stored in ptr2
    int* ptr2 = ptr1 + 4;
    std::cout << "Address stored in ptr1:" << ptr1 << std::endl;
    std::cout << "Address stored in ptr2:" << ptr2 << std::endl;
    // Subtracting ptr2 from ptr1
    std::cout << "ptr2 - ptr1 = " << ptr2 - ptr1 << std::endl; // Output = 4

    //Check if the pointer is in use or not
    if (ptr1 == NULL) {
        std::cout << "No value is pointed";
    }

    /*
    ADVANCED POINTERS NOTATION
    */
    int nums[2][3]  =  { { 16, 18, 20 }, { 25, 26, 27 } };
    // nums[i][j] == *(*(nums+i)+j)
    // Inside ** brackets increase row, inside * braket increase column
    /*
    *(*(nums))     --> nums[0][0]
    *(*nums+2)     --> nums[0][2]
    *(*(nums+1))   --> nums[1][0]
    *(*(nums+1)+2) --> nums [1][2]
    */

    return 0;
}
