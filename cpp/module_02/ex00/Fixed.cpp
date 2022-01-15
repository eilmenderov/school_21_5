#include "Fixed.hpp"

Fixed::Fixed() {

    std::cout << "\x1B[32mDefault constructor called\033[0m" << std::endl;
    value = 0;
}

Fixed::~Fixed() {

    std::cout << "\x1B[31mDefault destructor called\033[0m" << std::endl;
}

Fixed::Fixed(const Fixed &other) {

    std::cout << "\x1B[33mCopy constructor called\033[0m" << std::endl;
    *this = other;
}

int     Fixed::getRawBits(void) const {

    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void    Fixed::setRawBits(int const raw) {

    std::cout << "setRawBits member function called" << std::endl;
    value = raw;
}

Fixed & Fixed::operator=(const Fixed &other) {

    std::cout << "Assignation operator called" << std::endl;
    value = other.getRawBits();
    return *this;
}
