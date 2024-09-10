#include <iostream>

int main() {
    
    int decimal = 15;
    int octal = 017;
    int hex = 0x0F;
    int bin = 0b00001111;
    //int initialization
    int a; //warnings
    int b{}; //init to 0
    int c{15}; //init to 15
    //int d{2.9}; //warning or error
    // () can also be used
    // short and long can also be initialized
    

    //cast
    char value = 65;
    std::cout << "value: " << value << std::endl; // Output: 'a'
    std::cout << "value(int): " << static_cast<int>(value) <<std::endl; // Output: 65

    //auto
    auto var {1};
    auto var1 {1.1f};
    auto var2 {1.2l};
    auto var3 {'e'};
    //int modifier suffixes
    auto var4 {123u};
    auto var5 {123ul};
    auto var6 {123ll};
    //boolean values
    bool state{false};
    std::cout << "state: " << state <<std::endl;
    state = true;
    std::cout << "state: " << state <<std::endl;
    //prefix vs postfix increment
    int number = 5;
    int result = ++number;  // Prefix increment
    std::cout << "number: " << number << std::endl;  // Output: 6
    std::cout << "result: " << result << std::endl;  // Output: 6

    int number_1 = 5;

    std::cout << "number: " << number_1++ << std::endl;  // Output: 5
    std::cout << "result: " << number_1 << std::endl;  // Output: 6

    /*
    RELATIONAL OPERATORS
    */
    int number1 {45};
    int number2 {60};

    std::cout <<std::boolalpha;
    std::cout << "number1 < number2 " << (number1 < number2) <<std::endl;

    /*
    DATA FORMAT OUTPUT
    -------------------------------------------------------------------------
    --> see documentation
    std:cout << std::showpos +/- sign are shown
    std::cout << "Value (format) " <<std:dec/oct/hex << value <<std::endl;
    // no effect for floating number
    std::cout << std::showbase (show the base of the printed values)
    std::cout << std::uppercase;
    std::cout << std::fixed; not scientific notation
    std::cout <<std::setprecision(number of number out of comma)
    std::cout <<std::showpoint //force tho show of number out of comma
    */
    
    /*
    Numeric limits
    */
    /*
    WEIRD INTEGER 
    arithmetic operations can be done only for 4 byte integer_ compiler cast 2 byte int to 4 byte int to overcome this problem
    */

    return 0;
}
