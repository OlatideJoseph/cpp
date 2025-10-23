// getinfo.cpp -- input and output
#include <iostream>


int pow(int, int);

int main(void)
{
	using namespace std;
	
	int carrots;

	cout << "How many carrots do you have?" << endl;

	cin >> carrots;

	cout << "Here's two more. ";
	carrots += 2;

	cout << "Now you have " << carrots <<" carrots." << endl;

	cout << "The pow of two to 4 is "<< pow(2, 4)<< endl;
	cin.get();
	cin.get();
	return 0;
}

int pow(int x, int y)
{
	int def = x;
	for (int i = 1; i < y; i++)
		def *= y;
	return def;
}