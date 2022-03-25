#include "Bureaucrat.hpp"

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

const char *Bureaucrat::GradeTooHighException::what() const throw() {

    return ErrMsgGradeHigh;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {

    return ErrMsgGradeLow;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b) {

    os << b.getName() << ", bureaucrate grade " << b.getGrade();
    return (os);
}
