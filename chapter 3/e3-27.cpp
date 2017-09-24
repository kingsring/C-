#include<iostream>

int main()
{
    int txt_size(void);
    using namespace std;
    unsigned buf_size = 1024;
    int ia[buf_size];//WRONG!!!!!!!!!!!
    int ib[txt_size()];//WRONG!!!!!!!!!!!
    int ic[4*7-14];
}

int txt_size(void)
{
    return 100;
}
