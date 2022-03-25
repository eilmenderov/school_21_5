#include "Karen.hpp"

int main(int argc, char **argv) {

    Karen   test;

    if (argc != 2) {
        std::cout << "Error: wrong arguments!" << std::endl;
        return 1;
    } else
        test.filter(argv[1]);

    return 0;
}
