#include "RobotomyRequestForm.hpp"


const std::string RobotomyRequestForm::FormName = "RobotomyRequestForm";

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form(FormName, GradeToSign, GradeToExec), target_(target) {

}

RobotomyRequestForm::~RobotomyRequestForm() {

}

void RobotomyRequestForm::takeAction() const {

    std::cout << "Rizzzzzzzzzzzzzzzzzz...." << std::endl;
    std::srand(std::time(nullptr));
    int random_variable = std::rand();
    if (random_variable < MaxRandomNum / 2)
        std::cout << "SUCCESS: " << target_ << " has been robotomized" << std::endl;
    else
        std::cout << "FAILURE: " << target_ << " was gone..." << std::endl;
}