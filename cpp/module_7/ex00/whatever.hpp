#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template <typename T>
void swap(T& a, T& b) {

    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
const T& min(const T& a, const T& b) {

    if (a < b)
        return a;
    else
        return b;
}

template <typename T>
const T& max(const T& a, const T& b) {

    if (a > b)
        return a;
    else
        return b;
}

template<typename T>
void tester(T a, T b) {

    std::cout << "Original: a = " << a << ", b = " << b << std::endl;
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
}

#endif
