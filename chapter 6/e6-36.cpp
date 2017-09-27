#include<iostream>
#include<string>

string (*RetrStr())[10];

int main()
{
    using namespace std;
    string A[10];
    for ( auto &c : A )
        c = "welch";

    for (auto c: A)
        cout << c;
}
