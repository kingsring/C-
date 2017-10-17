#include<iostream>
#include<string>

class screen{
public:
    typedef unsigned pos;
    std::string getcontents(){ return contents; };
    pos getheight(){ return height; };
    screen() = default;
    screen(pos Height, pos Width);
    screen(pos Height, pos Width, char c);
private:
    pos height = 0;
    pos width = 0;
    pos cursor = 0;
    std::string contents;
};

screen::screen(pos Height, pos Width)
{
    height = Height;
    width = Width;
    std::string temp(height*width, ' ');
    contents = temp;
}
screen::screen(pos Height, pos Width, char c)
{
    height = Height;
    width = Width;
    std::string temp(height*width, c);
    contents = temp;
}

int main()
{
    screen A;
    A = screen(100,20,'c');
    std::cout << A.getcontents() << A.getheight();
}
