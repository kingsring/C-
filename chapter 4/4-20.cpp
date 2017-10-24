#include<iostream>
#include<cstring>

//this program want to tell you a things,that array's name is a address point to the first element
int main()
{
	using namespace std;
	char animal[20] = "bear";
	const char * bird = "wren";
	char * ps;
	
	cout << animal << " and ";
	cout << bird << endl;
	
	cout << "Enter a kind of animal:";
	cin >> animal;
	
	ps = animal;
	cout << ps << endl;
	cout << "Before using strcpy():" << endl;
	cout << animal << " at " << (int *) animal << endl;
	//animal point to a adress, if you conver to int , you can see clearly
	cout << ps << " at " << (int *) ps << endl;
	//ps and animals' adress are same one, cause you let ps = animal
	
	ps = new char[strlen(animal)+1];
	strcpy(ps, animal);
	cout << "After using strcpy():" << endl;
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *) ps << endl;
	
	//!!!!!!!!!!!!!!!!!DON'T FORGET USE DELETE TO FREE MEMERY! 
	delete ps;
	
	return 0;
 } 
