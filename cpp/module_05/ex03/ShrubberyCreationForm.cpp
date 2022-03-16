#include "ShrubberyCreationForm.hpp"

const std::string ShrubberyCreationForm::FormName = "ShrubberyCreationForm";

const std::string ShrubberyCreationForm::ShrubberyAsciiArt =
"\n"
"                                                         .\n"
"                                              .         ;  \n"
"                 .              .              ;%     ;;   \n"
"                   ,           ,                :;%  %;   \n"
"                    :         ;                   :;%;'     .,   \n"
"           ,.        %;     %;            ;        %;'    ,;\n"
"             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
"              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
"               ;%;      %;        ;%;        % ;%;  ,%;'\n"
"                `%;.     ;%;     %;'         `;%%;.%;'\n"
"                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
"                    `:%;.  :;bd%;          %;@%;'\n"
"                      `@%:.  :;%.         ;@@%;'   \n"
"                        `@%.  `;@%.      ;@@%;         \n"
"                          `@%%. `@%%    ;@@%;        \n"
"                            ;@%. :@%%  %@@%;       \n"
"                              %@bd%%%bd%%:;     \n"
"                                #@%%%%%:;;\n"
"                                %@@%%%::;\n"
"                                %@@@%(o);  . '         \n"
"                                %@@@o%;:(.,'         \n"
"                            `.. %@@@o%::;         \n"
"                               `)@@@o%::;         \n"
"                                %@@(o)::;        \n"
"                               .%@@@@%::;         \n"
"                               ;%@@@@%::;.          \n"
"                              ;%@@@@%%:;;;. \n"
"                          ...;%@@@@@%%:;;;;,..\n";

const std::string ShrubberyCreationForm::FileNameSuffix = "_shrubbery";

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form(FormName, GradeToSign, GradeToExec), target_(target) {

}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::takeAction() const {

    std::ofstream ofs(target_ + FileNameSuffix);
    if (!ofs) {
        std::cerr << "Failed to open the file" << std::endl;
        std::exit(EXIT_FAILURE);
    }
    ofs << ShrubberyAsciiArt << std::endl;
}