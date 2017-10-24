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
    for ( auto temp = v1.cbegin(); temp != v1.cend() ; temp++ )
        cout << *temp << ' ';

    cout << endl << "vector v2 is:" << endl;
    for ( auto temp = v2.cbegin(); temp != v2.cend() ; temp++ )
        cout << *temp << ' ';

    cout << endl << "vector v3 is:" << endl;
    for ( auto temp = v3.cbegin(); temp != v3.cend() ; temp++ )
        cout << *temp << ' ';

    cout << endl << "vector v4 is:" << endl;
    for ( auto temp = v4.cbegin(); temp != v4.cend() ; temp++ )
        cout << *temp << ' ';

    cout << endl << "vector v5 is:" << endl;
    for ( auto temp = v5.cbegin(); temp != v5.cend() ; temp++ )
        cout << *temp << ' ';

    cout << endl << "vector v6 is:" << endl;
    for ( auto temp = v6.cbegin(); temp != v6.cend() ; temp++ )
        cout << *temp << ' ';

    cout << endl << "vector v7 is:" << endl;
    for ( auto temp = v7.cbegin(); temp != v7.cend() ; temp++ )
        cout << *temp << ' ';

}
