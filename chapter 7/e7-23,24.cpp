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
    screen &mymove(pos h, pos w);
    screen &mymove(pos h, pos w) const;
    screen &myset(pos h, pos w, char c);
    screen &myset(pos h, pos w, char c) const;
    screen &mydisplay(std::ostream &os);
    screen &mydisplay(std::ostream &os) const;
private:
    void do_move(pos h, pos w);
    void do_set(pos h, pos w, char c);
    void do_display(std::ostream &os);
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
void do_move(pos h, pos w)
{

}
void do_set(pos h, pos w, char c);
void do_display(std::ostream &os);

int main()
{
    screen A;
    A = screen(100,20,'c');
    std::cout << A.getcontents() << A.getheight();
}
