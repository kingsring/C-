#include<iostream>
#include<vector>
#include<string>

int main()
{
    using namespace std;
    vector<string> vec;
    string str1;

    cout << "Enter string add to the vector:";
    while( cin >> str1 )
    {
        vec.push_back(str1);
        cout << "Got it:" << str1 << " Add to the vector.(Tyep Ctrl+Z to OVER)" << endl;
    }
    cout << endl << "vector is:" << endl;
    for ( auto &c: vec )
        cout << c << ' ';
    //DON'T FORGET RETRUN;
    return 0;
}
