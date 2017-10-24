class X
{
private:
    int A = 0;
    int B = 0;
public:
    class Y *C;
    int getA(){ return A;};
    int getB(){ return B;};
};

class Y
{
private:
    int A = 0;
    int B = 0;
public:
    int getA(){ return A;};
    int getB(){ return B;};
    class X;
};
