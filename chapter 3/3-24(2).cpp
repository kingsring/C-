#include<iostream>
#include<vector>

int main()
{
    using namespace std;
    vector<int> vec;
    int num,i=1,temp=0;//i control the adjacent number add,temp store the result.

    cout << "Enter num add to the vector:";
    while(cin >> num )
    {
        vec.push_back(num);
        cout << "Got it:" << num << " Add to the vector.(Tyep a no-figure or Ctrl+Z to OVER)" << endl;
    }

    {cout << endl << vec.size() << " vector is:" << endl;
    for (auto &c: vec)
        cout << c << ' ';
    cout << endl;}

    auto vbegin = vec.begin(), vend = vec.end();
    vend--;
    while( vend != vbegin )
    {
        cout << "vend = " << *vend << " vbegin = " << *vbegin << endl;
        vbegin++;
        vend--;
    }
    cout << "leave only one number can't add:" << *vend << endl;


    //DON'T FORGET RETRUN;
    return 0;
}

