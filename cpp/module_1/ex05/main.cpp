#include "Karen.hpp"

int main(void) {

    Karen   test;

    test.complain("DEBUG");
    test.complain("INFO");
    test.complain("WARNING");
    test.complain("ERROR");
    test.complain("random_value");

    return 0;
}
