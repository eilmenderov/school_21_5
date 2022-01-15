#include "Point.hpp"

Point::Point() {

}

Point::~Point() {

}

Point::Point(const Point &other) {

    const_cast<Fixed&>(x) = other.x;
    const_cast<Fixed&>(y) = other.y;
}

Point::Point(const int x, const int y) : x(x), y(y){

}

Point::Point(const float x, const float y) : x(x), y(y){

}

Point   &Point::operator=(const Point &other) {

    const_cast<Fixed&>(x) = other.x;
    const_cast<Fixed&>(y) = other.y;
    return *this;
}

Fixed   Point::getX() const {

    return x;
}

Fixed   Point::getY() const {

    return y;
}

float   Point::getXfl() const{

    return (x.toFloat());
}

float   Point::getYfl() const {

    return (y.toFloat());
}