#include <iostream>
#include <fstream>
#include "test.h"
#include "example.h"
#include "point.h"

template <typename T>
T func(T h, T b){
	std::cout << h << b << std::endl;
	return h;
}

std::ostream& operator<<(std::ostream& st, Point point){
	std::array<int, 2> arr = point.getValues();
	st << "<Point: "
		<< arr[0] << ", " << arr[1]
		<< ">";
	return st;
}

int main(){
	std::ofstream f("example.txt");

	int count = 0;
	do{
		f << "God is good all the time" << std::endl;
		count++;
	} while(count <= 100);

	func<int>(5, 5);
	Example example;

	Test<int> t ;

	Point p(5, 6);
	Point p2(1, 2);

	std::cout << p << '\n'
		<< p2 << '\n' 
		<< p + p2
		<< p * p2 <<std::endl;

	
	return 0;
}