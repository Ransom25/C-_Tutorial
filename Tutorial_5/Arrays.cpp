#include <iostream>
/*
ARRAY DECAY
* The loss of type and dimensions of an array is known as decay of an array. 
* This generally occurs when we pass the array into function by value or pointer.
*/
void aDecay(int* p)
{
    // Printing size of pointer
    std::cout << "Modified size of array is by "
            " passing by value: ";
    std::cout << sizeof(p) << std::endl; // original is x*4 bytes now is 2 bytes (16 bit micro)

}
// NO DECAY: pass by reference
void fun(int (&p)[7])
{
    // Printing size of array
    std::cout << "Modified size of array by "
            "passing by reference: ";
    std::cout << sizeof(p) << std::endl;
}

int main() {
    /*
    Array initialization
    */
    int array[2] = {2 , 2};
    int matrix[2][2] = { {1 , 2} , {3 , 4}};

    std::cout << "Hello World!" << std::endl;
    
    return 0;
}
