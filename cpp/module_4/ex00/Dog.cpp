#include "Dog.hpp"

const std::string	Dog::class_name = "Dog";

Dog::Dog():Animal() {

    std::cout << "\x1B[32mThe constructor for Dog was called\033[0m" << std::endl;
    this->setType(Dog::class_name);
}

Dog::Dog(const Dog &other) {

    std::cout << "The copy constructor for Dog was called\033[0m" << std::endl;
    *this = other;
}

Dog::~Dog() {

    std::cout << "\x1B[31mThe destructor for Dog was called\033[0m" << std::endl;
}


Dog     &Dog::operator=(const Dog &other) {

    if (this != &other)
        this->setType(other.getType());
    return (*this);
}

void    Dog::makeSound() const {

    std::cout << "Woof!" << std::endl;
}
