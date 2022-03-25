#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form {
    public:
        ShrubberyCreationForm(const std::string &target);
        virtual ~ShrubberyCreationForm();

        void                        takeAction() const;

    private:
        static const std::string    FormName;
        static const std::string    ShrubberyAsciiArt;
        static const std::string    FileNameSuffix;
        static const int            GradeToSign = 145;
        static const int            GradeToExec = 137;

        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &other);

        ShrubberyCreationForm       &operator=(const ShrubberyCreationForm &other);

        const std::string           &target_;
};

#endif
