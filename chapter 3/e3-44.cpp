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
    for(auto &c: ia)
    {
        for(auto &b: c)
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
    for( auto ptr1 = ia; ptr1 != ia+3; ptr1++ )
    {
        for( auto ptr2 = *ptr1; ptr2 != *ptr1+4; ptr2++)
            cout << *ptr2 << " ";
        cout << endl;
    }
}

