#include<iostream>
#include<string>

int main()
{
	using namespace std;
	
	string str1,str2;
	cout << "Enter a two string to compare" << endl << "First str1:";
	getline(cin, str1);
	cout << "Length:" << str1.size() << endl;
	cout << "Seconde str2:";
	getline(cin, str2); 
	cout << "Length:" << str2.size() << endl;
	//1	 Compare two string whos bigger or equal; 
//	if(str1 == str2)
//		cout << "Equal" << endl;
//	else if (str1 > str2)
//		cout << "str1:" << str1 << " Bigger!"<< endl;
//	else
//		cout << "str2:" << str2 << " Bigger!" << endl;  

	//2 Compare two string whos longer or same length;
	if(str1.size() == str2.size())
		cout << "Same Length" << endl;
	else if (str1.size() > str2.size())
		cout << "str1:" << str1 << " / Longer!"<< endl;
	else if (str1.size() < str2.size())
		cout << "str2:" << str2 << " / Longer!" << endl;   
}
