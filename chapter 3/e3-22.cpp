#include<iostream>
#include<string>

int main()
{
    using namespace std;
    string str1;

    cout << "Enter text:";
    cin >> str1;

    for( auto temp = str1.begin(); temp != str1.end(); temp++ )
        (*temp) = toupper(*temp);

    cout << "First section change to upper:" << endl << str1;

    return 0;
}
