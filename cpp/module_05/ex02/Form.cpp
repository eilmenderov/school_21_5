#include "Bureaucrat.hpp"
#include "Form.hpp"

const char* Form::GradeTooHighException::ErrMsgGradeHigh = "Error: Form: Grade is too high";

const char* Form::GradeTooLowException::ErrMsgGradeLow = "Error: Form: Grade is too low";

const char* Form::NotSignedException::ErrMsgNotSigned = "Error: Form: Form has NOT been signed yet";

Form::Form(const std::string &name, const int grade_to_sign, const int grade_to_execute) : name_(name), is_signed_(false), grade_to_sign_(grade_to_sign), grade_to_execute_(grade_to_execute) {

    if (grade_to_sign_ < Bureaucrat::HighestGrade || grade_to_execute_ < Bureaucrat::HighestGrade)
        throw Form::GradeTooHighException();
    else if (Bureaucrat::LowestGrade < grade_to_sign_ || Bureaucrat::LowestGrade < grade_to_execute_)
        throw Form::GradeTooLowException();
}

Form::~Form() {

}

const std::string &Form::getName() const {

    return name_;
}

bool Form::checkIfSigned() const {

    return is_signed_;
}

int Form::getGradeToSign() const {

    return grade_to_sign_;
}

int Form::getGradeToExecute() const {

    return grade_to_execute_;
}

void Form::beSigned(Bureaucrat &signer) {

    if (grade_to_sign_ < signer.getGrade())
        throw Form::GradeTooLowException();
    else
        is_signed_ = true;
}

void Form::execute(Bureaucrat const &executor) const {

    if (is_signed_ == false)
        throw Form::NotSignedException();
    else if (grade_to_execute_ < executor.getGrade())
        throw Form::GradeTooLowException();
    else
        takeAction();
}

const char *Form::GradeTooHighException::what() const throw() {

    return Form::GradeTooHighException::ErrMsgGradeHigh;
}

const char *Form::GradeTooLowException::what() const throw() {

    return Form::GradeTooLowException::ErrMsgGradeLow;
}

const char *Form::NotSignedException::what() const throw() {

    return Form::NotSignedException::ErrMsgNotSigned;
}

std::ostream &operator<<(std::ostream &os, const Form &f) {

    os << "Form name: " << f.getName() << "\nIs singed?: " << std::boolalpha << f.checkIfSigned() << "\nMin. grade to sign: " << f.getGradeToSign() << "\nMin. grade to execute: " << f.getGradeToExecute();
    return (os);
}
