#include <iostream>
#include"string"
using namespace std;

int main()
{
	string s1, s2;

	cout << "Enter the string : ";
	getline(cin, s1);

	s2 = s1;

	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2;

	return 0;
}