#include<iostream>

int main()
{
    using namespace std;

    int arr[10];
    int *pbegin = begin(arr),*pend = end(arr);
    for( int * temp = pbegin ; temp != pend ; temp++ )
        (*temp) = 0;

    cout << "Array is:" << endl;
    for( int i = 0; i < 10; i++ )
        cout << arr[i] << " ";

    return 0;
}
