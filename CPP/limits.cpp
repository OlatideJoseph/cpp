// limits.cpp -- Limit of primitive datatypes
#include<iostream>
#include<climits>

/**
 * main: The main module
 **/
int main(){
	using std::cout;
	using std::endl;

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;

	long long n_llong = LLONG_MAX;

	cout << "int is " << sizeof (int) << " bytes."<<endl;
	cout << "short is " << sizeof n_short << " bytes."<<endl;
	cout << "long is " << sizeof n_long <<" bytes."<<endl;

	cout << "long long is " << sizeof n_llong << " bytes."  << endl;

	cout << "Maximum Value" << endl;

	cout << "Int: " << n_int << endl;
	cout << "UInt: " << UINT_MAX << endl;
	cout << "ULong: " << ULONG_MAX << endl;
	cout << "Short: " << n_short << endl;
	cout << "Long: " << n_long << endl;
	cout << "Long Long: " << n_llong << endl;

	cout << "Minimum Int Value: "<< INT_MIN << endl;

	cout << "Minimum Short: " << SHRT_MIN << endl;
	cout << "Char BIT: " << CHAR_BIT << endl;
	
	return 0;
}