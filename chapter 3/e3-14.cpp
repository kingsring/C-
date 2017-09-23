#include<iostream>
#include<vector>

int main()
{
    using namespace std;
    vector<int> vec;
    int num;

    cout << "Enter num add to the vector:";
    while(cin >> num )
    {
        vec.push_back(num);
        cout << "Got it:" << num << " Add to the vector.(Tyep a no-figure or Ctrl+Z to OVER)" << endl;
    }
    cout << endl << "vector is:" << endl;
    for ( auto &c: vec )
        cout << c << ' ';

    cout << "Could vec[1] = 123 change the vector?" << endl;
    vec[1] = 123;

    cout << endl << "vector is:" << endl;
    for ( auto &c: vec )
        cout << c << ' ';
    //DON'T FORGET RETRUN;
    return 0;
}
