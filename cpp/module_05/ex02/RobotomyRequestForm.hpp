#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <cstdlib>
# include <ctime>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
    public:
        RobotomyRequestForm(const std::string &target);
        virtual ~RobotomyRequestForm();

        void                        takeAction() const;

    private:
        static const std::string    FormName;
        static const int            GradeToSign = 72;
        static const int            GradeToExec = 45;
        static const int            MaxRandomNum = 10;

        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &other);

        RobotomyRequestForm         &operator=(const RobotomyRequestForm &other);

        const std::string           &target_;
};

#endif
