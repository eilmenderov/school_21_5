#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){

    std::cout << "\x1B[32mThe constructor for WrongAnimal was called\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other){

    std::cout << "The copy constructor for WrongAnimal was called\033[0m" << std::endl;
    *this = other;
}

WrongAnimal::~WrongAnimal(){

    std::cout << "\x1B[31mThe destructor for WrongAnimal was called\033[0m" << std::endl;
}

WrongAnimal         &WrongAnimal::operator=(const WrongAnimal &other){

    if (this != &other)
        this->setType(other.getType());
    return (*this);
}

const std::string   &WrongAnimal::getType() const{
    
    return (this->type);
}

void                WrongAnimal::setType(const std::string new_type){
    
    this->type = new_type;
}

void                WrongAnimal::makeSound() const{
    
    std::cout << "This is a message from WrongAnimal class" << std::endl;
}