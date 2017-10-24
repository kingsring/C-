#include<iostream>

int main()
{
    using namespace std;

    int ia[3][4],temp=1;

    for( int i = 0; i < 3; i++ )
        for( int j = 0; j <4; j++)
            ia[i][j] = temp++;

    //1
    cout << "1:" << endl;
    for(int (&c)[4]: ia)
    {
        for( int &b: c)
            cout << b << " ";
        cout << endl;
    }
    //2
    cout << "2:" << endl;
    for( int i = 0; i < 3; i++ )
    {
        for( int j = 0; j <4; j++)
            cout << ia[i][j] << " ";
        cout << endl;
    }
    //3
    cout << "3:" << endl;
    for( int (*ptr1)[4] = ia; ptr1 != ia+3; ptr1++ )
    {
        for( int *ptr2 = *ptr1; ptr2 != *ptr1+4; ptr2++)
            cout << *ptr2 << " ";
        cout << endl;
    }
    //2
}
