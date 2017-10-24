#include<iostream>

int fact ( int n );
int main()
{
    using namespace std;
    int n;
    cout << "Enter a number to count the factorial:";
    cin >> n;
    cout << "factorial is:" << fact( n );

    return 0;
}
int fact (int n)
{
    int temp = 1;
    for(int i = 0; i < n; i++)
        temp *= (i+1);

    return temp;
}
