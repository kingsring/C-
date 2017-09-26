#include<iostream>

int main()
{
    using namespace std;
    int funcvar(void);

    cout << "First call fun:" << funcvar() << endl;
    cout << "Second call fun:" << funcvar() << endl;
    cout << "Third call fun:" << funcvar() << endl;

    return 0;
}

int funcvar(void)
{
    static int calltime = 0;

    return ( (calltime==0)?(++calltime,0):(++calltime,1) );
}

