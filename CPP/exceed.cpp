#include <iostream>
#define ZERO 0
#include <climits>

int main()
{
	using namespace std;

	short sam = {SHRT_MAX};
	unsigned short sue = sam;

	cout << "Sam: " << sam << endl;
	cout << "Sue: " << sue << endl;

	sue = USHRT_MAX;

	sue += 1;

	cout <<  sue  << " " << USHRT_MAX << endl;

}