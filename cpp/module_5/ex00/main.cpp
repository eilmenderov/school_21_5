#include "Bureaucrat.hpp"

int main(void) {

    Bureaucrat john("John", 0);
    std::cout << john << std::endl;

    // get promoted
    john.getPromoted();
    std::cout << john << std::endl;

    // get demoted
    john.getDemoted();
    std::cout << john << std::endl;

    // test error handling
    Bureaucrat vice_minister("Vice Minister", 1);
    Bureaucrat intern("Intern");
    std::cout << vice_minister << std::endl;
    std::cout << intern << std::endl;
    try {
        vice_minister.getPromoted();
    } catch (std::exception const &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        intern.getDemoted();
    } catch (std::exception const &e) {
        std::cout << e.what() << std::endl;
    }

    // test constructor error handling
    try {
        Bureaucrat too_low("too low", 200);
    } catch (std::exception const &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat too_high("too high", -200);
    } catch (std::exception const &e) {
        std::cout << e.what() << std::endl;
    }
}
