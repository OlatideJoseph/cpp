// strtyp2 -- trying to see if the string type can take c - style strings

#include<iostream>
#include<string>

int main()
{
	using namespace std;
	char name[] = {'O', 'l', 'a', '\0'};
	cout << name << endl;
	return 0;
}