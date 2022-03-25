#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void testShrubberyCreationForm() {

    Bureaucrat john("John", 100);
    Bureaucrat bob("Bob", 140);
    Bureaucrat will("Will", 150);

    std::cout << john << std::endl;
    std::cout << bob << std::endl;
    std::cout << will << std::endl;

    // test for ShrubberyCreationForm
    ShrubberyCreationForm form("my_home");

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

void testRobotomyRequestForm() {

    Bureaucrat john("John", 30);
    Bureaucrat bob("Bob", 50);
    Bureaucrat will("Will", 100);

    std::cout << john << std::endl;
    std::cout << bob << std::endl;
    std::cout << will << std::endl;

    // test for ShrubberyCreationForm
    RobotomyRequestForm form("Minister");

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

void testPresidentialPardonForm() {

    Bureaucrat john("John", 1);
    Bureaucrat bob("Bob", 10);
    Bureaucrat will("Will", 30);

    std::cout << john << std::endl;
    std::cout << bob << std::endl;
    std::cout << will << std::endl;

    // test for ShrubberyCreationForm
    PresidentialPardonForm form("Prime Minister");

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

int main(void) {
    // testShrubberyCreationForm();
    testRobotomyRequestForm();
    // testPresidentialPardonForm();
    return (0);
}
