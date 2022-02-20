#include "WrongCat.hpp"

const std::string   WrongCat::class_name = "WrongCat";

WrongCat::WrongCat():WrongAnimal() {

    std::cout << "\x1B[32mThe constructor for WrongCat was called\033[0m" << std::endl;
    this->setType(WrongCat::class_name);
}

WrongCat::WrongCat(const WrongCat &other) {

    std::cout << "The copy constructor for WrongCat was called\033[0m" << std::endl;
    *this = other;
}

WrongCat::~WrongCat() {

    std::cout << "\x1B[31mThe destructor for WrongCat was called\033[0m" << std::endl;
}

WrongCat    &WrongCat::operator=(const WrongCat &other) {

    if (this != &other)
        this->setType(other.getType());
    return (*this);
}

void        WrongCat::makeSound() const {

    std::cout << "This is a message from WrongCat class" << std::endl;
}
