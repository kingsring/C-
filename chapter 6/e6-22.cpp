#include<iostream>

void swappointer( int **A, int **B );
void swappointer2( int * &A, int * &B);
int main()
{
    using namespace std;
    int *A, *B;
    cout << "int *A = " << A << " int *B = " << B << endl;
    swappointer(&A, &B);
    cout << "int *A = " << A << " int *B = " << B << endl;
    swappointer2(A, B);
    cout << "int *A = " << A << " int *B = " << B << endl;
    return 0;
}

void swappointer( int **A, int **B)
{
    int *temp;
    temp = *A;
    *A = *B;
    *B = temp;
}

void swappointer2( int * &A, int * &B)
{
    int *temp;
    temp = A;
    A = B;
    B = temp;
}
