#include "Cat.hpp"

const std::string	Cat::class_name = "Cat";

Cat::Cat():Animal() {

    std::cout << "\x1B[32mThe constructor for Cat was called\033[0m" << std::endl;
    this->setType(Cat::class_name);
}

Cat::Cat(const Cat &other) {

    std::cout << "The copy constructor for Cat was called\033[0m" << std::endl;
    *this = other;
}

Cat::~Cat() {

    std::cout << "\x1B[31mThe destructor for Cat was called\033[0m" << std::endl;
}


Cat     &Cat::operator=(const Cat &other) {

    if (this != &other)
        this->setType(other.getType());
    return (*this);
}

void    Cat::makeSound() const {

    std::cout << "Meow!" << std::endl;
}
