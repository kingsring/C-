#include<iostream>
#include<string>

class screen{
public:
    typedef unsigned pos;
    std::string getcontents(){ return contents; };
    pos getheight(){ return height; };
    pos getwidth(){ return width; };
    screen() = default;
    screen(pos Height, pos Width);
    screen(pos Height, pos Width, char c);
    screen &mymove(pos h, pos w);
    screen &myset(pos h, pos w, char c);
    screen &myset( char c);
    screen &mydisplay(std::ostream &os);
    const screen &mydisplay(std::ostream &os) const;
private:
    void do_display(std::ostream &os) const;
    pos height = 0;
    pos width = 0;
    pos cursor = 0;
    std::string contents;
};
//Ctors
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
//Func
screen &screen::mymove(pos h, pos w)
{
    cursor = h*width + w;
    return *this;
}
screen &screen::myset(pos h, pos w, char c)
{
    contents[h*width + w] = c;
    return *this;
}
screen &screen::myset( char c)
{
    contents[cursor] = c;
    return *this;
}
void screen::do_display(std::ostream &os) const
{
    os << contents;
}
screen &screen::mydisplay(std::ostream &os)
{
    do_display(os);
    return *this;
}
const screen &screen::mydisplay(std::ostream &os) const
{
    do_display(os);
    return *this;
}

int main()
{
    screen myScreen(5, 5, 'X');
    myScreen.mymove(4,0).myset('#').mydisplay(std::cout);
    std::cout << "\n";
    myScreen.mydisplay(std::cout);
    std::cout << "\n";

    return 0;
}
