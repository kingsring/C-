#include<iostream>
#include<vector>

int main()
{
    using namespace std;
    vector<int> grade (11, 0);
    int num;
    cout << "Enter grade:";
    while( cin >> num && (num >=0 && num <= 100))
    {
        cout << "Got it! grade is " << num << "(Ctrl+Z is Over)" << endl;
        num = num/10;
        auto temp = grade.begin();
        for( ; num != -1; num--, temp++);
        (*temp) += 1;
    }
    for( auto temp = grade.begin(); temp != grade.end(); temp++)
        cout << *temp << " ";

    return 0;
}
