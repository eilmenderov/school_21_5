#include "Intern.hpp"

const std::string Intern::ShrubberyFormName = "shrubbery creation form";

const std::string Intern::RobotomyFormName = "robotomy request form";

const std::string Intern::PresidentialFormName = "presidential pardon form";

const char* Intern::InvalidFormNameException::ErrMsgInvalidFormName = "Error: Intern: Invalid form name";

Intern::Intern() {

    funcs[ShrubberyIndex] = &Intern::makeShrubberyCreationForm;
    funcs[RobotomyIndex] = &Intern::makeRobotomyRequestForm;
    funcs[PresidentialIndex] = &Intern::makePresidentialPardonForm;
}

Intern::Intern(Intern const &other) {

    *this = other;
}

Intern::~Intern() {

}

Intern &Intern::operator=(Intern const &other) {

    (void)other;
    return *this;
}


int Intern::getIndex(const std::string &form_name) const {

    return (form_name == ShrubberyFormName) * ShrubberyIndex +
            (form_name == RobotomyFormName) * RobotomyIndex +
            (form_name == PresidentialFormName) * PresidentialIndex +
            (form_name != ShrubberyFormName && form_name != RobotomyFormName &&
            form_name != PresidentialFormName) * InvalidIndex;
}

Form *Intern::makeForm(const std::string &form_name, const std::string &target) {

    int index = getIndex(form_name);
    if (index == InvalidIndex)
        throw Intern::InvalidFormNameException();
    else
        std::cout << "Intern creates " << form_name << std::endl;
        return (this->*funcs[index])(target);
}

Form *Intern::makeShrubberyCreationForm(const std::string &target) const {

    return new ShrubberyCreationForm(target);
}

Form *Intern::makeRobotomyRequestForm(const std::string &target) const {

    return new RobotomyRequestForm(target);
}

Form *Intern::makePresidentialPardonForm(const std::string &target) const {

    return new PresidentialPardonForm(target);
}

const char *Intern::InvalidFormNameException::what() const throw() {

    return Intern::InvalidFormNameException::ErrMsgInvalidFormName;
}
