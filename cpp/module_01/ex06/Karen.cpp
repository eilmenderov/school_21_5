#include "Karen.hpp"

Karen::Karen() {

    std::cout << "\x1B[32mConstructor called \033[0m" << std::endl;
}

Karen::~Karen() {

    std::cout << "\x1B[31mDestructor called\033[0m" << std::endl;
}

void    Karen::complain(std::string level) {

    std::string all_level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void        (Karen::*func[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

    for (int i = 0; i < 4; i++) {
        if (!level.compare(all_level[i])) {
            (this->*func[i])();
            return;
        }
    }
    std::cout << "Error complain" << std::endl;
}

void     Karen::filter(std::string level) {

    std::string all_level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int         i;

    for (i = 0; i < 4; i++) {
        if (!level.compare(all_level[i]))
            break;
    }

    switch (i) {
        case 0: {
            this->complain("DEBUG");
        }
        case 1: {
            this->complain("INFO");
        }
        case 2: {
            this->complain("WARNING");
        }
        case 3: {
            this->complain("ERROR");
            break ;
        }
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

void    Karen::debug(void) {

    std::cout << "[ DEBUG ]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!\n" << std::endl;
}

void    Karen::info(void) {

    std::cout << "[ INFO ]\nI cannot believe adding extra bacon cost more money.\nYou don’t put enough! If you did I would not have to askfor it!\n" << std::endl;
}

void    Karen::warning(void) {

    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month.\n" << std::endl;
}

void    Karen::error(void) {

    std::cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now.\n" << std::endl;
}
