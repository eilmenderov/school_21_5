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

        Fixed               &operator=(const Fixed &other);

        Fixed               operator+(const Fixed &other);
        Fixed               operator-(const Fixed &other);
        Fixed               operator*(const Fixed &other);
        Fixed               operator/(const Fixed &other);
        Fixed               operator++(int);
        Fixed               operator--(int);
        Fixed               &operator++(void);
        Fixed               &operator--(void);
        bool                operator>(const Fixed &other);
        bool                operator<(const Fixed &other);
        bool                operator>=(const Fixed &other);
        bool                operator<=(const Fixed &other);
        bool                operator==(const Fixed &other);
        bool                operator!=(const Fixed &other);

        int                 getRawBits(void) const;
        void                setRawBits(int const raw);
        float               toFloat() const;
        int                 toInt() const;

        static Fixed        &min(Fixed &first, Fixed &second);
        static Fixed const  &min(Fixed const &first, Fixed const &second);
        static Fixed        &max(Fixed &first, Fixed &second);
        static Fixed const  &max(Fixed const &first, Fixed const &second);
};

std::ostream &operator<<(std::ostream &out, const Fixed &other);

#endif