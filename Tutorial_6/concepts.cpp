#include <iostream>
#include <concepts>

/*
CONCEPT: a mechanism to place constraint about data type (C++ 20 feature)
* There are standard built in concepts
* Custom concept are also possible<
* Following example requires int input
* NB concept evaluate syntax not the value you will get
*/
template <typename T>
requires std::integral<T>
T add (T a, T b){
    return a+b;
}
// Another syntax
template <typename T>
T add_1 (T a, T b) requires std::integral<T>{
    return a+b;
}

int main() {
    
    std::cout << "Hello World!" << std::endl;
    
    auto result_a = add(2,3); //OK
    auto result_b = add('a','b'); // OK
    auto result_c = add(1.2,1.3); // ERROR! INT constraint not matched
    return 0;
}
