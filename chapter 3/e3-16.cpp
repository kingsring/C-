#include<iostream>
#include<string>
#include<vector>

int main()
{
    using namespace std;

    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10,"hi"};

    cout << endl << "vector v1 is:" << endl;
    for ( auto &c: v1 )
        cout << c << ' ';

    cout << endl << "vector v2 is:" << endl;
    for ( auto &c: v2 )
        cout << c << ' ';

    cout << endl << "vector v3 is:" << endl;
    for ( auto &c: v3 )
        cout << c << ' ';

    cout << endl << "vector v4 is:" << endl;
    for ( auto &c: v4 )
        cout << c << ' ';

    cout << endl << "vector v5 is:" << endl;
    for ( auto &c: v5 )
        cout << c << ' ';

    cout << endl << "vector v6 is:" << endl;
    for ( auto &c: v6 )
        cout << c << ' ';

    cout << endl << "vector v7 is:" << endl;
    for ( auto &c: v7 )
        cout << c << ' ';

}
