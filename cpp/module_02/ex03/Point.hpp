#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class   Point {

    private:
        Fixed const x;
        Fixed const y;

    public:
        Point();
        ~Point();
        Point(const Point& other);
        Point(const int x, const int y);
        Point(const float x, const float y);

        Point   &operator=(const Point& other);

        Fixed   getX(void) const;
        Fixed   getY(void) const;
        float   getXfl(void) const;
        float   getYfl(void) const;
};

# endif
