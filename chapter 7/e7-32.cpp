#include<iostream>
#include<string>
#include<vector>

class window_mgr
{
public:
    void myclear();
};
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
    friend void window_mgr::myclear();
private:
    void do_display(std::ostream &os) const;
    pos height = 0;
    pos width = 0;
    pos cursor = 0;
    std::string contents;
};

//class screen
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

//window_mgr
void window_mgr::myclear()
{
    screen myScreen(10,20, 'X');
    std::cout << "Before is:";
    myScreen.mydisplay(std::cout);
    std::cout << "\n";
    myScreen.contents = " ";
    std::cout << "After is:";
    myScreen.mydisplay(std::cout);
    std::cout << "\n";
}

int main()
{
    window_mgr w;
    std::cout << "Myclear:" << std::endl;
    w.myclear();

    return 0;
}

