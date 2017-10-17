#include<iostream>
#include<string>

class Person
{
public:
    std::string Name = "NAN";
    std::string Address = "Wangjiang";
    Person() = default;
    Person( const std::string name, const std::string address );
public:
    std::string getName() const{ return Name; };
    std::string getAddress() const{ return Address; };
};

Person::Person( const std::string name, const std::string address )
{
    Name = name;
    Address = address;
};

std::istream &read(std::istream &is, Person &p)
{
    is >> p.Name >> p.Address;
    return is;
}
std::ostream &print(std::ostream &os, Person &p)
{
    os << p.Name << " " << p.Address << std::endl;
}

int main()
{
    using namespace std;

    Person p;
    p = Person("kewenchi","wanjiang");
    print(cout,p);

    return 0;
}
