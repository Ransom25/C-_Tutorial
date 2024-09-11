#include <iostream>

using namespace std;

/*
DEFINE A STRUCTURE
* struct keyword is used to define a structure, which is a user-defined data type 
* that groups different variables (called members) together under a single name.
*/
struct Person {
    int age;
    float heigth;
    std::string name;
};
// self referencial structure --> used in data structure and algorithm
struct node {
    int data1;
    char data2;
    struct node* link;
};
/*
DEFINE TYPEDEF
* typedef is  keyword used to create type aliases. 
* It allows you to define an alias for an existing data type, 
* which can make the code more readable and easier to maintain.
*/
typedef unsigned long ulong;

/*
UNIONS
* Unions are similiar to structs in syntax and usage, unions have a unique characteristic: 
* all members of a union share the same memory location. 
* This means that only one member of a union can hold a value at any given time.
* The size of the union is determined by the size of its largest member, 
* and all members start at the same memory address.
*/
union Data {
    int integer;
    float floatingPoint;
    char character;
};

/*
ENUM
* An enum provides a way to define a collection of related constants (like days of the week, colors, states, etc.) 
* under one type name. 
* Enums improve code readability by allowing the programmer to use meaningful names instead of numeric literals
*/
enum Color {
    Red,       // 0
    Green,     // 1
    Blue,      // 2
    Yellow = 5 // Explicitly set value to 5
};

enum class Direction {
    North,
    East,
    South,
    West
};

// Defining enum Year 
enum year { 
    Jan = 1, 
    Feb, 
    Mar, 
    Apr, 
    May, 
    Jun, 
    Jul, 
    Aug, 
    Sep, 
    Oct, 
    Nov, 
    Dec 
};

void move(Direction dir) {
    switch (dir) {
        case Direction::North:
            std::cout << "Moving North" << std::endl;
            break;
        case Direction::East:
            std::cout << "Moving East" << std::endl;
            break;
        case Direction::South:
            std::cout << "Moving South" << std::endl;
            break;
        case Direction::West:
            std::cout << "Moving West" << std::endl;
            break;
        default:
            std::cout << "Unknown direction!" << std::endl;
            break;
    }
}

int main() {
/* 
ACCES/MODIFY STRUCTURE DATA
*/
    struct Person subject_1;
    subject_1.age = 20;
    subject_1.name = "Gianni";

    int Gianni_age = subject_1.age;
    //pointer structure
    Person* subject_2 = new Person;
    subject_2->name = "Alex";

/*
USE TYPEDEF
*/
    ulong number = 1234567;

/*
USE UNIONS
*/
Data data;
data.integer = 10;
cout << data.integer << endl; // Outuput: 10

data.floatingPoint = 3.14f;
cout << data.floatingPoint << endl; // Outuput: 3,14
cout << data.integer << endl; // Outuput is garbage!!

/*
USE ENUM
*/
Color myColor = Green;
cout << "Green is: " << myColor << endl; // Output: Green is: 1

Direction dir = Direction::North;
move(dir); // Output: Moving North

int i;
// Traversing the year enum --> structure values become global
    for (i = Jan; i <= Dec; i++) 
        cout << i << " "; 
    //Output: 1 2 3 4 5 6 7 8 9 10 11 12

    return 0;
}