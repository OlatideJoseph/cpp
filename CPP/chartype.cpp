#include <iostream>
using namespace std;
int main(){

	char v;

	cout << hex;
	v = '\a';

	char32_t a = 65;

	cout.put(v);
	cout << '\n' << a << endl;

	cout << v << endl;
	cout << "Enter a character !" << endl;

	cin >> v;

	cout << "Hola! ";

	cout << "Thank you for the " << v <<
	 " character." << endl;
	return 0;
}