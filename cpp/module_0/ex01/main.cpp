#include "PhoneBook.hpp"

int main(void) {

    std::string     str;
    PhoneBook       book;

    std::cout << "Write command: ";
    while (std::getline(std::cin, str)) {
        if (str == "EXIT")
            return 0;
        else if (str == "ADD")
            book.AddData();
        else if (str == "SEARCH")
            book.SearchData();
        std::cout << "Write command: ";
    }
}
