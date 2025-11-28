// instr3.cpp -- reading more than one word with get() & get()

#include<iostream>

int main()
{
	using namespace std;

	const int ArgSize = 20;
	char name[ArgSize];
	char dessert[ArgSize];

	cout << "Enter your name:\n";
	cin.get(name, ArgSize).get();
	cout << "Enter your favourite dessert:\n";
	cin.get(dessert, ArgSize).get();
	cout << "I have some delicious dessert " << dessert;
	cout << " for you, " << name << ".\n";
	
	return 0;
}