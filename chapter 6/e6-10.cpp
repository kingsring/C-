#include<iostream>

void myswap1( int *a, int *b );
void myswap2( int &a, int &b );

int main()
{
    using namespace std;
    int A = 10, B = 22;
    cout << "A = " << A << " B = " << B << endl;
    myswap1( &A, &B );
    cout << "A = " << A << " B = " << B << endl;
    myswap2( A, B );
    cout << "A = " << A << " B = " << B << endl;
}

void myswap1( int *a, int *b )
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void myswap2( int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
