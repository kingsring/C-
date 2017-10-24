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

    cout << endl << "vector is:" << endl;
    for (auto &c: vec)
        cout << c << ' ';
    cout << endl;

    cout << "Add adjacent number" << endl;
    for ( auto c = vec.begin(); c != vec.end() ; c++ )
    {
        if( i == 2)
         {
             temp +=*c;
             cout << temp << ' ';
             temp = 0;
             i = 1;
         }
        else{
            temp +=*c;
            i++;
        }
    }
    if( i == 2 )
        cout << endl << "Last number don't have adjacent:" << temp;

    //DON'T FORGET RETRUN;
    return 0;
