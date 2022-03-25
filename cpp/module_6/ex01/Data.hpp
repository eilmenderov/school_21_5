#ifndef DATA_HPP
# define DATA_HPP

# include <string>
# include <iostream>

struct Data {

    int             id;
    std::string     name;
    std::string     phone_number;
};

std::ostream &operator<<(std::ostream &os, const Data &data);

#endif
