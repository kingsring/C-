#include<iostream>

// one thing you need to know is the getline read till meet (enter), this function won't read (enter)
// it leave this character, if you read a line again, maybe won't get a line, but get a (enter)
// then the function will return a empty line 

int main()
{
	using namespace std;
	
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	char name1[ArSize];
	char name2[ArSize];	
	//1
//	cout << "Enter your name:" << endl;
//	cin.get(name, ArSize).get();
//	cout << "Enter your favorite dessert:"<< endl;
// 	cin.get(dessert, ArSize).get();
// 	cout << "I have some delicious " << dessert;
// 	cout << " for you," << name << endl;

	//2
	// if you test in this you will find a problem
	// £¨type) kwc (enter)
	//	 before type your english name ,the program was over
	// if you type this
	// (type) kwc(SPACE)welch(enter)
	// it will work
	cout << "Enter your name and english name:" << endl;
	cin.get(name1, ArSize).get(name2, ArSize);
	cout << "well, you are "<< name1 << " " << name2 << endl;
 	
 	return 0;
 } 
