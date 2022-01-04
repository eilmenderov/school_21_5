#include "Contact.hpp"

Contact::Contact() {

    // std::cout << "\x1B[32mConstructor called Contact\033[0m\t\t" << std::endl;
}

Contact::~Contact() {

    // std::cout << "\x1B[31mDestructor called Contact\033[0m\t\t" << std::endl;
}

void        Contact::setFirst_name(std::string newstr) {

    first_name = newstr;
}

std::string Contact::getFirst_name() {

    return first_name;
}

void        Contact::setLast_name(std::string newstr) {

    last_name = newstr;
}

std::string Contact::getLast_name() {

    return last_name;
}

void        Contact::setNickname(std::string newstr) {

    nickname = newstr;
}

std::string Contact::getNickname() {

    return nickname;
}

void        Contact::setPhone_number(std::string newstr) {

    phone_number = newstr;
}

std::string Contact::getPhone_number() {

    return phone_number;
}

void        Contact::setDarkest_secret(std::string newstr) {

    darkest_secret = newstr;
}

std::string Contact::getDarkest_secret() {

    return darkest_secret;
}

void        Contact::setIndex(int ind) {

    index = ind;
}

int         Contact::getIndex() {

    return index;
}

std::ostream    &operator << (std::ostream &out, const Contact &other) {

    out.setf(std::ios::right);
    out << "\x1B[33mIndex:\033[0m\t\t" << ((Contact)other).getIndex() << std::endl;
    out << "\x1B[33mFirst name:\033[0m\t" << ((Contact)other).getFirst_name() << std::endl;
    out << "\x1B[33mLast name:\033[0m\t" << ((Contact)other).getLast_name() << std::endl;
    out << "\x1B[33mNickname:\033[0m\t" << ((Contact)other).getNickname() << std::endl;
    out << "\x1B[33mPhone number:\033[0m\t" << ((Contact)other).getPhone_number() << std::endl;
    out << "\x1B[33mDarkest secret:\033[0m\t" << ((Contact)other).getDarkest_secret() << std::endl;
    return out;
}
