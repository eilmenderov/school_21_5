#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <cctype>
# include <iomanip>

class Contact {

    private:
        int         index;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;

    public:
        Contact();
        ~Contact();

        void        setFirst_name(std::string newstr);
        std::string getFirst_name();

        void        setLast_name(std::string newstr);
        std::string getLast_name();

        void        setNickname(std::string newstr);
        std::string getNickname();

        void        setPhone_number(std::string newstr);
        std::string getPhone_number();

        void        setDarkest_secret(std::string newstr);
        std::string getDarkest_secret();

        void        setIndex(int ind);
        int         getIndex();
    };

std::ostream    &operator << (std::ostream &out, const Contact &other);

#endif
