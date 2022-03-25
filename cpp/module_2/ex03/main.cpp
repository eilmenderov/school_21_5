#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point);

int main(void) {

	Point	a(0, 0);
	Point	b(10, 0);
	Point	c(0, 10);
	Point	point(0, 1);

	std::cout << "Result is " << bsp(a, b, c, point) << std::endl;

	return (0);
}