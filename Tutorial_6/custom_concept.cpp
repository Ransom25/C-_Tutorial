#include <iostream>
#include <concepts>

// Syntax 1: custom concepts setup
template <typename T>
concept Myintegral = std::is_integral_v<T>;

//Use custom concept
template <typename T>
requires Myintegral<T> 
T add(T a, T b) {
    return a+b;
}
/*
Also like this
template <typename T>
requires Myintegral<T> 
Myintegral auto add(Myintegral a, Myintegral b) {
    return a+b;
}
*/

/*
COMPOUND REQUIRMENTS
*/
template <typename T>
concept Addable = requires (T a, T b) {
    {a + b} -> std::convertible_to<int>;
};

Addable auto addition( Addable auto a, Addable auto b) {
    return a+b;
}

/*
NESTED CONCEPTS
*/
template <typename T>
concept TinyTipe = requires(T t){
    requires sizeof(T) <=4;  //NESTED
};

/*
COMBINED CONCEPTS
*/
template <typename T>
requires std::integral<T> ||  std::floating_point<T>
T add_1 (T a, T b) {
    return a+b;
}

//Another example
template <typename T>
requires std::integral<T> && TinyTipe<T>
T add_2 (T a, T b) {
    return a+b;
}


int main() {
    int x = 6, y{5};

    add(x,y); // concept satisfied 

    return 0;
}