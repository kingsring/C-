#include<iostream>
#include<string>

int main()
{
	using namespace std;
	string str1 = "I will study c++ well!";
    decltype(str1.size()) c = str1.size();
	cout << "Begin the str1 is:" << str1 << endl;
    //1
//    while( c != -1 )
//    {
//        str1[c] = 'X';
//        c--;
//    }

    //2
    for(auto i = c; i!= -1; i--)
        str1[i]='X';

	cout << "Then str1 is " << str1 << endl;

	return 0;
 }

