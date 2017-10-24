#include<iostream>
#include<string>
#include<cctype>

int main()
{
    using namespace std;
    string str1, temp;

    do{
        cout << "Enter string:" ;
        cout << endl << ">>>>>>Enter Ctrl+Z or same two string to quit, other to continue.<<<<<" <<endl;
        getline(cin, str1);
        if(temp == str1 && temp.size() && isupper(temp[0]))break;
        temp = str1;
    } while(1);


    if ( (temp == str1) && temp.size() )
        cout << "Same two string " << temp;
    else
        cout << "End of the file." << endl;

    return 0;
}


