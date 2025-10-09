#ifndef POINT_H
#define POINT_H
#include <array>
#include <ostream>
class Point{
	int x, y;
public:
	Point();
	Point(int X, int Y);
	Point operator+(Point other);
	Point operator-(Point other);
	Point operator*(Point other);
	// expected to return x, y
	std::array<int, 2> getValues();

};
#endif