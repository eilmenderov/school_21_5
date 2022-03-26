#include "whatever.hpp"

int main() {

    int a = 2;
    int b = 3;

    std::cout << "Befor swap: a = " << a << ", b = " << b << std::endl;
    ::swap(a, b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
    std::cout << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << "Befor swap: c = " << c << ", d = " << d << std::endl;
    ::swap(c, d);
    std::cout << "After swap: c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
    std::cout << std::endl;

    tester<char>('a', 'b');
    std::cout << std::endl;
    tester<float>(-4.2f, 4.2f);
    std::cout << std::endl;
    tester<double>(-4.2e-200, 4.2e200);
    std::cout << std::endl;
    tester<std::string>("abcde", "fghij");
    std::cout << std::endl;
    tester<bool>(false, true);
    std::cout << std::endl;
}