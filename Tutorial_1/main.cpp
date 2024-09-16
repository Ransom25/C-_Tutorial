#include <iostream>

int addNumbers (int first, int second) {
    int sum = first + second;
    //telling the compiler that the varibale X is to be made extern
    extern int count;
    count = 2;

    return sum;
}
/*
CONST and DEFINE
*/
#define max_size 10 //preprocessor definition, simple text substitution,
                    //no memory allocation, no type checking

const int a = 10; //Read-only variable
constexpr int A = 10; // Another definition for const

int main() {
    
    /* 
    Multiple line comment
    std::cout << "Hello World!"<< std::endl;
    std::cout << "Number1"<< std::endl ;
    std::cout << "Number2"<< std::endl;
    */
    
    int a {10}, b {12};
    int sum = addNumbers(a,b);

    int count = 0;
    //One line comment
    //std::cout << "The sum of the number is: " << sum <<std::endl;
    
    // Convert numbers to strings and concatenate them
    std::string result = "The sum of " + std::to_string(a) + " + " + std::to_string(b) + " is: " + std::to_string(sum);

    // Print the result
    std::cout << result << std::endl;

    // Error
    std::cerr << "std::err output: Something went wrong!" <<std::endl;

    //Input data
    /*
    int age;
    std::string name;

    std::cout << "Please enter your name and age: " << std::endl;
    std::cin >> name >> age;
    std::cout << "Yourn name is " << name << " and you are " << age << " years old." <<std::endl;
    */
    
    //get line
    /*
    std::string full_name;
    std::cout << "Please enter your name and age: " << std::endl;
    std::cin >>(std::cin,full_name);
    std::cin >> age;
    std::cout << "Yourn name is " << full_name << " and you are " << age << " years old." <<std::endl;

    */
    
    

    //Input with spaces
    
    return 0;
}
