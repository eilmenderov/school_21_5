#include "Animal.hpp"

Animal::Animal() {

    std::cout << "\x1B[32mThe constructor for Animal was called\033[0m" << std::endl;
}

Animal::Animal(const Animal &other) {

    std::cout << "The copy constructor for Animal was called" << std::endl;
	*this = other;
}

Animal::~Animal() {

    std::cout << "\x1B[31mThe destructor for Animal was called\033[0m" << std::endl;
}

Animal              &Animal::operator=(const Animal &other) {

	if (this != &other)
		this->setType(other.getType());
	return (*this);
}

const std::string   &Animal::getType() const
{
	return (this->type);
}

void                Animal::setType(const std::string new_type) {

	this->type = new_type;
}

void                Animal::makeSound() const {

}
