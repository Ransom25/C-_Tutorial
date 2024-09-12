#include <iostream>
#include <string_view>
/*
DESTRUCTURE are called:
- when an object is passed by value to a function
- when alocal object is returned from a function
- when alocal scope object goes out of stack
- when a hepa object is released with delete
NB: constructor and destructor are called in reverse order
* constructor: FIFO
* destructur: LIFO
*/
class Dog{
    public :
        Dog() = default;
        Dog(std::string_view name_param, std::string_view breed_param, int age_param);
        //Destructur
        ~Dog(); //not possible to pass parameters

        private  :
                std::string name;
                std::string breed;
                int * p_age{nullptr};
};

Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param) {
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "Constructur called " << name << std::endl;
}

Dog::~Dog(){
    delete p_age;
    p_age = nullptr;
    std::cout << "Destructur called " << name << std::endl;
}

void func(Dog dog_param) {

}

int main() {
    Dog myDog("Fluffy","Shepherd", 2);
    //func(myDog); // bad thing will happen
    /*
    * object is passed by value
    * object is already destructed so pointer is deleted twice !!very risky
    * 
    */
    return 0;
}
