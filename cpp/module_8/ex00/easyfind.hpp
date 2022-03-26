#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <string>
# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

template <typename T>
typename T::iterator easyfind(T& value, int number) {

    typename T::iterator  it;

    try {
        it = std::find(value.begin(), value.end(), number);
    } catch (std::exception& exept) {
        std::cout << exept.what() << std::endl;
    }
    return it;
}

template <typename T>
typename T::const_iterator easyfind(const T& value, int number) {

    typename T::const_iterator  it;

    try {
        it = std::find(value.begin(), value.end(), number);
    } catch (std::exception& exept) {
        std::cout << exept.what() << std::endl;
    }
    return it;
}

#endif
