#include<iostream>
#include<vector>

int main()
{
    using namespace std;
    vector<int> vec;
    vector<int> copyv;
    int num;

    cout << "Enter num add to the vector:";
    while(cin >> num )
    {
        vec.push_back(num);
        cout << "Got it:" << num << " Add to the vector.(Tyep a no-figure or Ctrl+Z to OVER)" << endl;
    }
    cout << endl << "vector vec is:" << endl;
    for ( auto &c: vec )
        cout << c << ' ';

    cout << endl << "Use copyv = vec Copy vec to copyv."<<endl;
    copyv = vec;
    cout << "vector copyv is:" << endl;
    for ( auto &c: copyv )
        cout << c << ' ';

    cout << endl << "Do copyv copy or link to the vec?" << endl;
    copyv[0] = 123456;
    for ( auto &c: vec )
        cout << c << ' ';
    cout << endl << "Copy!Don't link,change copyv don't influence vec." << endl;
    //DON'T FORGET RETRUN;
    return 0;
}

