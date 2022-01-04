#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {

    list = 0;
    all_lists = 0;
    // std::cout << "\x1B[32mConstructor called PhoneBook\033[0m\t\t" << std::endl;
}

PhoneBook::~PhoneBook() {

    // std::cout << "\x1B[31mDestructor called PhoneBook\033[0m\t\t" << std::endl;
}

void    PhoneBook::print(int num_lists) {

    std::cout.setf(std::ios::right);
    std::cout.width(10);
    std::cout << num_lists;
}

void    PhoneBook::print(std::string str) {

    if (str.length() > 10)
        std::cout << str.substr(0, 9) << ".";
    else {
        std::cout.setf(std::ios::right);
        std::cout.width(10);
        std::cout << str;
    }
}

void    PhoneBook::AddData() {

    std::string str;

    if (list > 7)
        list = 0;

    std::cout << "First name is: ";
    std::getline(std::cin, str);
    contact[list].setFirst_name(str);

    std::cout << "Last name is: ";
    std::getline(std::cin, str);
    contact[list].setLast_name(str);

    std::cout << "Nickname is: ";
    std::getline(std::cin, str);
    contact[list].setNickname(str);

    std::cout << "Phone number is: ";
    std::getline(std::cin, str);
    contact[list].setPhone_number(str);

    std::cout << "Darkest secret is: ";
    std::getline(std::cin, str);
    contact[list].setDarkest_secret(str);

    contact[list].setIndex(list + 1);
    list++;
    all_lists++;
}

void    PhoneBook::SearchData() {

    if (all_lists > 7)
        all_lists = 8;
    int i = 0;
    while (i < all_lists) {
        print(contact[i].getIndex());
        std::cout << "|";
        print(contact[i].getFirst_name());
        std::cout << "|";
        print(contact[i].getLast_name());
        std::cout << "|";
        print(contact[i].getNickname());
        std::cout << "|\n";
        i++;
    }

    std::string str;
    std::cout << "Select contact: ";
    std::getline(std::cin, str);
    i = atoi(str.c_str());
    // std::cout << "NUM: " << i << std::endl;
    if (i > 0 && i < 9 && i < all_lists + 1)
        std::cout << contact[i - 1];
    else
        std::cout << "Not such contact: " << str << std::endl;
}
