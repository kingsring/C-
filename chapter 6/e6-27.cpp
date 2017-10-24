#include<iostream>
#include<initializer_list>

int mcount(std::initializer_list<int> A);

int main()
{
    using namespace std;
    initializer_list<int> listA;
    cout << "mcount({1,2,3,4,5,6}) = " << mcount({1,2,3,4,5,6}) << endl;
    cout << "mcount({3,5,3,6,8,3,4,55,2,7,34,5}) = " << mcount({3,5,3,6,8,3,4,55,2,7,34,5}) << endl;

    return 0;
}

int mcount(std::initializer_list<int> A)
{
    int temp = 0;
    for( auto c = A.begin(); c != A.end(); c++ )
        temp += *c;
    return temp;
}
