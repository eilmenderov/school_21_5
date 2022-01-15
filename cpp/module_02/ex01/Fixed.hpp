#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class   Fixed {

    private:
        int                 value;
        static const int    bit = 8;

    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &other);
        Fixed(const int int_value);
        Fixed(const float float_value);

        int                 getRawBits(void) const;
        void                setRawBits(int const raw);
        Fixed               &operator=(const Fixed &other);
        float               toFloat() const;
        int                 toInt() const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &other);

#endif