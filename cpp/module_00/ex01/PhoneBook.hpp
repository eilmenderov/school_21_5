#ifndef BOOK_HPP
# define BOOK_HPP

# include "Contact.hpp"

class PhoneBook {

    private:
        Contact         contact[8];
        int             list;
        int             all_lists;

    public:
        PhoneBook();
        ~PhoneBook();

        void    print(int num_lists);
        void    print(std::string str);
        void    AddData();
        void    SearchData();
};

#endif
