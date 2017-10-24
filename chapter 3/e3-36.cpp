#include<iostream>
#include<vector>
#include<iterator>

int main()
{
    using namespace std;
    bool EqualArr(int arr1[], int arr2[], int length);
    vector<int> vec1(10,2);
    vector<int> vec2(10,3);
    int arr1[10] = {0};
    int arr2[10];
    for( int i = 0; i < 10; i++ )
        arr2[i] = 0;
    cout << "Compare two array arr1 and arr2 result:" << EqualArr(arr1, arr2, 10)
         << endl << "(True:Equal, False:NOT)" << endl;

    cout << "Compare two vector vec1 and vec2 equal or not result:" << vec1 == vec2
         << endl << "(True:Equal, False:NOT)" << endl;
}
bool EqualArr(int arr1[], int arr2[], int length)
{
    for( int i = 0; i < length; i++)
        if (arr1[i] != arr2[i])
            return false;
    return true;
}
