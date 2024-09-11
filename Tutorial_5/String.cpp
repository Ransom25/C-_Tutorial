#include <iostream> 

int main() {
/*
STRING DECLARATION
*/
   std::string str("Hello"); //string object
   std::string s = "Hello";
   char C_string[6] = {'H','e','l','l','o','\0'};
   char C_string1[6] = "Hello";

/*
ARRAY OF STRING
*/
    const char* colour[4]
        = { "Blue", "Red", "Orange", "Yellow" };
    
    // Initialize 2D array if string length is known
    char colour[4][10]
        = { "Blue", "Red", "Orange", "Yellow" };

    // Using string class
    std::string clour[4] 
        = { "Blue", "Red", "Orange", "Yellow" };

    return 0;
}

