#include<iostream>
#include<string>
#include<cctype>
int main()
{
    using namespace std;
    string str1;

    cout << "Enter a passage:";
    getline(cin, str1);
    cout << "Remove the punctuation:";
    for( auto &c: str1 )
        if (!ispunct(c))
            cout << c;

    return 0;
}
