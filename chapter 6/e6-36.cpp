#include<iostream>
#include<string>

typedef std::string arr[10] String10;

String10 &RetrStr1();
std::string (&RetrStr2( std::string *&A ))[10];
auto RetrStr3() -> std::string (&)[10];

int main()
{
    using namespace std;
    string A[10];
    for ( auto &c : A )
        c = "welch";

    for (auto c: A)
        cout << c;
}

std::string (&RetrStr())[10]
{}
