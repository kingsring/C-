#include<iostream>

int test( int A , int *B );

int main()
{
    using namespace std;
    int a = 1;
    int *b;
    *b = 123;
    cout << endl << test( a, b );

    return 0;
}

int test( int A ,int *B)
{
    std::cout << "A = " << A << " B = " << *B;

    return ((A>*B)?A:*B);
}
