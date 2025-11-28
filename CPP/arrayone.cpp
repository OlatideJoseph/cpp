// arrayone.cpp - small array of integers
#include <iostream>
int main(){
	using namespace std;

	int yams[3];

	yams[0] = 7;
	yams[1] = 6;
	yams[2] = 8;

	static int yamCosts[3] = {20, 30, 5};

	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;

	cout << "The package with " << yams[1] << " yam costs ";
	cout << yamCosts[1] << " cents per yam. \n";

	int total = yams[0] * yamCosts[0] + yams[1] * yamCosts[1];
	total = total + yams[2] * yamCosts[2];
	cout << "The total yam expense is " << total << " cents.\n ";

	cout << "\nSize of yams array " << sizeof yams;
	cout << " bytes. \n";
	cout << "Size of one element = " << sizeof yams[0];
	cout << " bytes.\n";

	cout << yams[3] << '\n';
	cout << sizeof yams;


	return 0;
}