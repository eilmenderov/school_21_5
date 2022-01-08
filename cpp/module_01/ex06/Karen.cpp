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
    // std::cout << "Error complain" << std::endl;
}

void     Karen::filter(std::string level, std::string argv) {

    std::string all_level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    size_t      key_filter = 6;
    size_t      key_level = 5;

    for (int i = 0; i < 4; i++) {
        if (!argv.compare(all_level[i]))
            key_filter = i;
        if (!level.compare(all_level[i]))
            key_level = i;
    }

    switch ((key_filter > key_level) + (key_filter > 4)) {
        case 0:
            this->complain(level);
            break;
        case 2:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }

}

void    Karen::debug(void) {

    std::cout << "DEBUG:\t I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Karen::info(void) {

    std::cout << "INFO:\t I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to askfor it!" << std::endl;
}

void    Karen::warning(void) {

    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void    Karen::error(void) {

    std::cout << "ERROR:\t This is unacceptable, I want to speak to the manager now." << std::endl;
}
