#include<iostream>
#include<string>
#include<cctype>

int main()
{
    using namespace std;
    string str1, str2;
    char temp;

    do{
        cout << "Enter two string,first:" << endl;
        getline(cin, str1);
        cout << "Second:" << endl;
        getline(cin, str2);
        cout << "Ok, two string is:" << endl;
        cout << "(1)" + str1 << endl << "(2)" + str2 << endl;
        cout << "The shorter one is:";
        cout << ( (str1.size() > str2.size())?str2:str1);
        cout << endl << "Enter Q/q to quit, other to continue."<<endl;
    } while( (cin >> temp ), ((temp == 'Q' || temp == 'q')?false:getchar()));

    return 0;
}
