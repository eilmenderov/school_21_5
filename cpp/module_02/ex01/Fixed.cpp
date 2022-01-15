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

Fixed::Fixed(const int int_value) {

    std::cout << "\x1B[32mInt constructor called\033[0m" << std::endl;
    value = roundf(int_value * (1 << bit));
}

Fixed::Fixed(const float float_value) {

    std::cout << "\x1B[32mFloat constructor called\033[0m" << std::endl;
    value = roundf(float_value * (1 << bit));
}

int     Fixed::getRawBits(void) const {

    // std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void    Fixed::setRawBits(int const raw) {

    // std::cout << "setRawBits member function called" << std::endl;
    value = raw;
}

Fixed & Fixed::operator=(const Fixed &other) {

    std::cout << "Assignation operator called" << std::endl;
    value = other.getRawBits();
    return *this;
}

float   Fixed::toFloat() const {

    return (value / (float)(1 << bit));
}

int     Fixed::toInt() const {

    return (value / (1 << bit));
}

std::ostream &operator<<(std::ostream &out, const Fixed &other) {

    out << other.toFloat();
    return out;
}
