#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {
    public:
        PresidentialPardonForm(const std::string &target);
        virtual ~PresidentialPardonForm();

        void takeAction() const;

    private:
        static const std::string    FormName;
        static const int            GradeToSign = 25;
        static const int            GradeToExec = 5;

        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &other);

        PresidentialPardonForm      &operator=(const PresidentialPardonForm &other);

        const std::string &target_;
};

#endif
