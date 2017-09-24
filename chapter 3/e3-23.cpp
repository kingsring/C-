#include<iostream>
#include<vector>

int main()
{
    using namespace std;
    vector<int> num (10, 1); //initial a vector with 10 element, each one is 1;

    cout << "vector is:" << endl;
    ;
    for( auto temp = num.begin(); temp != num.end(); temp++ )
        cout << *temp << " ";

    for( auto temp = num.begin(); temp != num.end(); temp++ )
        (*temp) *= 2;

    cout << endl << "Double num's each element:" << endl;;
    for( auto temp = num.begin(); temp != num.end(); temp++ )
        cout << *temp << " ";
    cout << endl;

    return 0;
}
