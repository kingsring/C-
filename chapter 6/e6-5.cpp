#include<iostream>

int main()
{
    using namespace std;
    int myabs(int n);
    int num;

    cout << "Enter a number:";
    cin >> num;
    cout << "absolute value is:" << myabs(num);

    return 0;
}

int myabs(int n)
{
    return ((n > 0)?n:-n);
}
