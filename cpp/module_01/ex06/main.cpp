#include "Karen.hpp"

int main(int argc, char **argv) {

    Karen   test;

    if (argc != 2) {
        std::cout << "Error: wrong arguments!" << std::endl;
        return 1;
    }

    test.filter("DEBUG", argv[1]);
    test.filter("INFO", argv[1]);
    test.filter("WARNING", argv[1]);
    test.filter("ERROR", argv[1]);
    test.filter("random_value", argv[1]);

    return 0;
}
