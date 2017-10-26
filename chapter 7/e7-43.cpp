#include<iostream>
#include<string>
#include<vector>

class NoDefault
{
public:
    //NoDefault() = default;
    NoDefault(int a, int b):A(a),B(b){};
    void display(){ std::cout << "A = " << A << " B = " << B;};
private:
    int A;
    int B;
};

class C
{
public:
    C():D(0,0){};
    void printC(){ D.display(); };
private:
    NoDefault D;
};

int main()
{
    C temp;
    temp.printC();
    std::vector<NoDefault> vec(10);
}
