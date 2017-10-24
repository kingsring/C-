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

    decltype( vec.size() ) vbegin = 0, vend = vec.size()-1;
    while( vend != vbegin )
    {
        cout << "vec[vend] = " << vec[vend] << " vec[vbegin] = " << vec[vbegin] << endl;
        cout << "vec[" << vbegin+1 << "]+vec[" << vend+1 << "] = " << vec[vend]+vec[vbegin] << endl;
        vbegin++;
        vend--;
    }
    cout << "leave only one number can't add:" << vec[vend] << endl;


    //DON'T FORGET RETRUN;
    return 0;
}
