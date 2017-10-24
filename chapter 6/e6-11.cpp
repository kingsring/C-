#include<iostream>

void reset( int & intA );

int main()
{
    using namespace std;

    int A = 100;
    cout << "A = " << A << endl;
    reset(A);
    cout << "A = " << A << endl;;

    return 0;
}

void reset( int & intA )
{
    intA = 0;
}
