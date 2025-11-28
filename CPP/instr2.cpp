// instr2.cpp -- reading more than one word with getline
#include<iostream>

int main(){
	using namespace std;
	const int ArgSize = 20;
	char name[ArgSize];
	char dessert[ArgSize];

	cout << "Enter your name:\n";
	cin.getline(name, ArgSize);
	cout << "Enter your favourite dessert: \n";
	cin.getline(dessert, ArgSize);
	cout << "I have some delicious dessert " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}