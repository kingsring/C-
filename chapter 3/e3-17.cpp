#include<iostream>
#include<vector>
#include<string>
#include<cctype>

int main()
{
    using namespace std;
    vector<string> vec;
    string str1;

    cout << "Enter string add to the vector:";
    while( cin >> str1 )
    {
        cout << "Got it:" << str1 << " Add to the vector.(Tyep Ctrl+Z to OVER)" << endl;
        for( auto &c : str1 )
            c = toupper(c);
        vec.push_back(str1);
    }
    cout << endl << "letter became upper,then vector is:" << endl;
    for ( auto &c: vec )
        cout << c << endl;
    //DON'T FORGET RETRUN;
    return 0;
}

