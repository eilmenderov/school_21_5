#include "PresidentialPardonForm.hpp"

const std::string PresidentialPardonForm::FormName = "PresidentialPardonForm";

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form(FormName, GradeToSign, GradeToExec), target_(target) {

}

PresidentialPardonForm::~PresidentialPardonForm() {

}

void PresidentialPardonForm::takeAction() const {

    std::cout << target_ << " has been pardoned by Zafod Beeblebrox" << std::endl;
}