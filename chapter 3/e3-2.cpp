#include<iostream>
#include<string>
#include<cstring>
int main()
{
	using namespace std;
	
	string str1;
	
	cout << "Read a line:";
	getline(cin, str1);
	cout << "Str1 is:" << str1 << endl;
	cout << "Now change the str1 to a word£º";
	cin >> str1;
	cout << "Now str1 is:" << str1 <<endl;

	//DON'T FORGET TO LOST RETURN !
	return 0; 
 }
  
