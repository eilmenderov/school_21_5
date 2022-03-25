#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point) {

    float point1;
    float point2;
    float point3;

    point1 = (a.getXfl() - point.getXfl()) * (b.getYfl() - a.getYfl()) -
            (b.getXfl() - a.getXfl()) * (a.getYfl() - point.getYfl());
    point2 = (b.getXfl() - point.getXfl()) * (c.getYfl() - b.getYfl()) -
            (c.getXfl() - b.getXfl()) * (b.getYfl() - point.getYfl());
    point3 = (c.getXfl() - point.getXfl()) * (a.getYfl() - c.getYfl()) -
            (a.getXfl() - c.getXfl()) * (c.getYfl() - point.getYfl());
    if ((point1 >= 0 && point2 >= 0 && point3 >= 0) ||
            (point1 <= 0 && point2 <= 0 && point3 <= 0))
        return true;
    return false;
}