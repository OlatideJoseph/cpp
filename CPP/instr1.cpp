// instr1.cpp -- reading more than one string
#include<iostream>

int main(){
	using namespace std;
	const int ArgSize = 20;
	char name[ArgSize];
	char dessert[ArgSize];

	cout << "Enter your name:\n";
	cin >> name;
	cout << "Enter your favourite dessert: \n";
	cin >> dessert;
	cout << "I have some delicious dessert " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}