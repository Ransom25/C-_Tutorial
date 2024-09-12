#include <iostream>
#include <string_view>

/*
THIS
is a pointer to the memeory address where the object is 
*/
class Dog{
    public :
        Dog() = default;
        Dog(std::string_view name_param, std::string_view breed_param, int age_param);
        //Destructur
        ~Dog(); //not possible to pass parameters
        //Setters
        /*
        POINTERS
        */
        Dog* set_dog_name(std::string_view name) {
            //this is needed since input of the function and class classifier have the same name
            this->name = name; 
            return this;    
        }

        Dog* set_dog_breed (std::string_view breed) {
            this->breed = breed;
            return this;
        }

        Dog* set_dog_age(int age) {
            *(this->p_age) = age;
            return this;
        }

        /*
        REFERENCES
        */
        Dog& set_dog_name_ref(std::string_view name) {
            //this is needed since input of the function and class classifier have the same name
            this->name = name; 
            return *this;    
        }

        Dog& set_dog_breed_ref (std::string_view breed) {
            this->breed = breed;
            return *this;
        }

        Dog& set_dog_age_ref(int age) {
            *(this->p_age) = age;
            return *this;
        }

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
    std::cout << "Constructur called " << name << " at" << this << std::endl;
    //this = memory address in memory of the current object
}

Dog::~Dog(){
    delete p_age;
    p_age = nullptr;
    std::cout << "Destructur called " << name << " at" << this << std::endl;
    //this = memory address in memory of the current object
}

int main() {

    Dog dog1("Fluffy","Dalmata",12);
    //Cool way to populate object
    //Pointers
    dog1.set_dog_name("Pumba")->set_dog_breed("Fox terrier")->set_dog_age(12);
    //References
    dog1.set_dog_name_ref("Timon").set_dog_breed_ref("Collie").set_dog_age_ref(5);
    return 0;
}

/*
CLASSES memeory occupation
- not always the size class is equal to the size of its member
--> Boundary alignment can happen: many compiler do this when they have memeber variable of different type. 
- so size of the object can be greater than the coumpound size of its membersl
*/