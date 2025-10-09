#include "point.h"

Point::Point(){
	x = 0;
	y = 0;
}

Point::Point(int X, int Y){
	x = X;
	y = Y;
}

Point Point::operator+(Point other){
	std::array<int, 2> arr = other.getValues();
	return Point(arr[0] + x, arr[1] + y);
}

Point Point::operator-(Point other){
	std::array<int, 2> arr = other.getValues();
	return Point(x - arr[0], y - arr[1]);
}
Point Point::operator*(Point other){
	std::array<int, 2> arr = other.getValues();
	return Point(x * arr[0], y * arr[1]);
}

std::array<int, 2> Point::getValues(){
	std::array<int, 2> arr = {x, y};
	return arr;
}