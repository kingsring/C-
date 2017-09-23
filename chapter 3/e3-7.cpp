#include<iostream>
#include<string>

int main()
{
	using namespace std;
	string str1 = "I will study c++ well!";

	cout << "Begin the str1 is:" << str1 << endl;
	for (char &C : str1)
		C = 'X';
	cout << "Then str1 is " << str1 << endl;

	return 0;
 }
