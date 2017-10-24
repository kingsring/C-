#include<iostream>
#include<string>

int main()
{
	using namespace std;
	
	string str1, temp;
	str1 = "";
	//1 link all the string to a huge string 
//	cout << "Enter some string you want:";
//	while( cin >> temp )
//	{
//		str1 +=temp;
//		cout << "Right!I got it.(Ctrl+z is over)" << endl; 
//	} 
//	cout << "Final string is:" << str1 << endl;
//	
//	//£¡£¡£¡DON'T FORGET!
//	return 0; 

	//2 link all the string to a huge string(divide with space);
	cout << "Enter some string you want:";
	while( cin >> temp )
	{
		str1 = str1 + " " + temp;
		cout << "Right!I got it.(Ctrl+z is over)" << endl; 
	} 
	cout << "Final string is:" << str1 << endl;
	
	//£¡£¡£¡DON'T FORGET!
	return 0; 
 } 
