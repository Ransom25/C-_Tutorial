#include <iostream>
using namespace std;

int main() {

    //CASE 1
    int *p_number { new int {67} };
    int number{55};
    p_number = &number; //Program lost access to that Heap memory location

    //CASE 2
    p_number = new int{44}; //should delete and reset here

    //CASE 3
    {
        int *p_number1 {new int{57}};
        //should delte and reset here;
    }
    return 0;
}