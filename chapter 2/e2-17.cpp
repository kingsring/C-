#include<iostream>

int main()
{
	using namespace std;
	
	int i, &ri = i;
	i = 5;
	cout << "Before reset ri, i = "<< i << endl; 
	ri = 10;
	cout << "ri = 10, then i = ";
	cout << i << "\nri = " << ri << endl;
	
	return 0;
 } 
