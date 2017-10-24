#include<iostream>
#include<string>
#include<cctype>

int main( int argc, char *argv[])
{
    using namespace std;
    string str1;

    for( int i = 1; i < argc; i++ )
        cout << argv[i] << " ",str1 = str1 + argv[i];

    cout << endl << str1;
    getchar();
    return 0;
}
