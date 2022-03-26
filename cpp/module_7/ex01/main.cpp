#include "iter.hpp"

int main() {

    // test char
    std::size_t array_size = 10;
    {
        char array[10];
        for (std::size_t i = 0; i < array_size; ++i)
            array[i] = '!' + static_cast<char>(i);
        std::cout << "Original array: ";
        iter(array, array_size, printValue);
        std::cout << std::endl;
        iter(array, array_size, doubleValue);
        std::cout << "After doubled:  ";
        iter(array, array_size, printValue);
        std::cout << std::endl;
    }
    // test int
    {
        int array[10];
        for (std::size_t i = 0; i < array_size; ++i)
            array[i] = i + 1;
        std::cout << "Original array: ";
        iter(array, array_size, printValue);
        std::cout << std::endl;
        iter(array, array_size, doubleValue);
        std::cout << "After doubled:  ";
        iter(array, array_size, printValue);
        std::cout << std::endl;
    }
    // test float
    {
        float array[10];
        for (std::size_t i = 0; i < array_size; ++i)
            array[i] = static_cast<float>(i) + 0.5f;
        std::cout << "Original array: ";
        iter(array, array_size, printValue);
        std::cout << std::endl;
        iter(array, array_size, doubleValue);
        std::cout << "After doubled:  ";
        iter(array, array_size, printValue);
        std::cout << std::endl;
    }
    // test string
    {
        std::string array[10];
        for (std::size_t i = 0; i < array_size; ++i) {
            std::stringstream ss;
            ss << i;
            array[i] = ss.str() + ss.str();
        }
        std::cout << "Original array: ";
        iter(array, array_size, printValue);
        std::cout << std::endl;
        iter(array, array_size, doubleValue);
        std::cout << "After doubled:  ";
        iter(array, array_size, printValue);
        std::cout << std::endl;
    }
    return 0;
}
