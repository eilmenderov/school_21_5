#include "Bureaucrat.hpp"
#include "Form.hpp"

const char* Bureaucrat::GradeTooHighException::ErrMsgGradeHigh = "Error: Bureaucrat: Grade is too high";

const char* Bureaucrat::GradeTooLowException::ErrMsgGradeLow = "Error: Bureaucrat: Grade is too low";

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name_(name), grade_(grade) {

    if (grade_ < HighestGrade)
        throw Bureaucrat::GradeTooHighException();
    else if (LowestGrade < grade_)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {

}

const std::string &Bureaucrat::getName() const {

    return name_;
}

int Bureaucrat::getGrade() const {

    return grade_;
}

void Bureaucrat::getPromoted() {

    if (grade_ != HighestGrade)
        --grade_;
    else
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::getDemoted() {

    if (grade_ != LowestGrade)
        ++grade_;
    else
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &form) {

    try {
        form.beSigned(*this);
        std::cout << name_ << " signs " << form.getName() << std::endl;
    } catch (std::exception const &e) {
        std::cout << name_ << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(Form const &form) {

    try {
        form.execute(*this);
        std::cout << name_ << " executes " << form.getName() << std::endl;
    } catch (std::exception const &e) {
        std::cout << name_ << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {

    return Bureaucrat::GradeTooHighException::ErrMsgGradeHigh;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {

    return Bureaucrat::GradeTooLowException::ErrMsgGradeLow;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b) {

    os << b.getName() << ", bureaucrate grade " << b.getGrade();
    return (os);
}
