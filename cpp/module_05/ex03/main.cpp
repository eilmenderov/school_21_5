#include "Bureaucrat.hpp"
#include "Intern.hpp"

void testShrubberyCreationForm(Form &form) {

    Bureaucrat john("John", 100);
    Bureaucrat bob("Bob", 140);
    Bureaucrat will("Will", 150);

    std::cout << john << std::endl;
    std::cout << bob << std::endl;
    std::cout << will << std::endl;

    std::cout << std::endl;
    std::cout << form << std::endl;
    std::cout << std::endl;

    // test NotSignedException
    john.executeForm(form);

    // test GradeTooLowExeption for signing
    will.signForm(form);

    // test GradeTooLowExeption for executing
    bob.signForm(form);

    std::cout << std::endl;
    std::cout << form << std::endl;
    std::cout << std::endl;

    bob.executeForm(form);

    // test successful execution
    john.executeForm(form);
}

void testRobotomyRequestForm(Form &form) {

    Bureaucrat john("John", 30);
    Bureaucrat bob("Bob", 50);
    Bureaucrat will("Will", 100);

    std::cout << john << std::endl;
    std::cout << bob << std::endl;
    std::cout << will << std::endl;

    std::cout << std::endl;
    std::cout << form << std::endl;
    std::cout << std::endl;

    // test NotSignedException
    john.executeForm(form);

    // test GradeTooLowExeption for signing
    will.signForm(form);

    // test GradeTooLowExeption for executing
    bob.signForm(form);

    std::cout << std::endl;
    std::cout << form << std::endl;
    std::cout << std::endl;

    bob.executeForm(form);

    // test successful execution
    john.executeForm(form);
}

void testPresidentialPardonForm(Form &form) {

    Bureaucrat john("John", 1);
    Bureaucrat bob("Bob", 10);
    Bureaucrat will("Will", 30);

    std::cout << john << std::endl;
    std::cout << bob << std::endl;
    std::cout << will << std::endl;

    std::cout << std::endl;
    std::cout << form << std::endl;
    std::cout << std::endl;

    // test NotSignedException
    john.executeForm(form);

    // test GradeTooLowExeption for signing
    will.signForm(form);

    // test GradeTooLowExeption for executing
    bob.signForm(form);

    std::cout << std::endl;
    std::cout << form << std::endl;
    std::cout << std::endl;

    bob.executeForm(form);

    // test successful execution
    john.executeForm(form);
}

int main() {

    // test constructors / assignation operator
    Intern someRandomIntern;
    Intern copy(someRandomIntern);
    Intern assigned;
    assigned = someRandomIntern;

    Form* scf;
    Form* rrf;
    Form* ppf;
    Form* invalid_form;

    // test makeForm functions
    scf = someRandomIntern.makeForm("shrubbery creation form", "my_home");
    rrf = someRandomIntern.makeForm("robotomy request form", "Minister");
    ppf = someRandomIntern.makeForm("presidential pardon form", "Prime Minister");

    // test invalid form exception
    try {
        invalid_form = someRandomIntern.makeForm("invalid form", "hoge");
    } catch (std::exception const &e) {
        std::cout << e.what() << std::endl;
    }
    delete scf;
    delete rrf;
    delete ppf;
}
