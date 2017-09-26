#include<iostream>
#include "e6-8Chapter6.h"

int main()
{
    using namespace std;
    int funcvar(void);

    cout << "First call fun:" << funcvar() << endl;
    cout << "Second call fun:" << funcvar() << endl;
    cout << "Third call fun:" << funcvar() << endl;

    return 0;
}

