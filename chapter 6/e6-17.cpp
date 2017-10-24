#include<iostream>
#include<string>
#include<cctype>

bool IncluUpper( const std::string &str1 );
void TranToLower( std::string &str1 );

int main()
{
    using namespace std;
    string str1;
    cout << "Enter a string:";
    getline(cin, str1);
    cout << ((IncluUpper(str1))?"The String has upper case":"The String doesn't have upper case") << endl;
    cout << "The String is:" << str1 << endl;
    TranToLower(str1);
    cout << "Convert to lower case:" << str1 << endl;

    return 0;
}

bool IncluUpper(const std::string &str1)
{
    /*
    if you just want to check whether the string contain the upper case,
        you don't need to change everything.
        so the best way is using const
        as this way, you can make sure don't change the string the value.
    */
    for( auto c: str1)
        if(isupper(c))
            return true;
    return false;
}
void TranToLower(std::string &str1)
{
    /*
    in this function,we need to change the string.
    so we can't transfer a const string to a function, then in this function, we change the const string.
    this is wrong,(also is error,you can't do this really, your complier will warn you)
    so we using string(without const)
    */
    for( auto &c: str1)
        c = tolower(c);
}
