#include "Dog.hpp"

const std::string	Dog::class_name = "Dog";

Dog::Dog():Animal() {

    std::cout << "\x1B[32mThe constructor for Dog was called\033[0m" << std::endl;
    this->dog_brain = new Brain();
    this->setType(Dog::class_name);
}

Dog::Dog(const Dog &other) {

    std::cout << "The copy constructor for Dog was called\033[0m" << std::endl;
    this->dog_brain = new Brain();
    *this = other;
}

Dog::~Dog() {

    delete this->dog_brain;
    std::cout << "\x1B[31mThe destructor for Dog was called\033[0m" << std::endl;
}


Dog     &Dog::operator=(const Dog &other) {

    if (this != &other) {
        this->setType(other.getType());
        this->dog_brain = new Brain();
    }
    return (*this);
}

void    Dog::makeSound() const {

    std::cout << "Woof!" << std::endl;
}
