#include<iostream>
#include<string>

class Person
{
private:
    std::string name;
    std::string address;
public:
    Person();
    Person(const std::string &name, const std::string &address);
    std::string getName();
    std::string getAddress();
};

std::string Person::getName()
{
    return name;
}
std::string Person::getAddress()
{
    return address;
}
Person::Person(){
    name = "UNKNOW";
    address = "UNKNOW";
}
Person::Person(const std::string &Name, const std::string &Address)
{
    name = Name;
    address = Address;
}

int main()
{
    Person A,B;
    A = Person();
    B = Person("kewenchi", "SCU");
    std::cout << A.getName() << ' ' << A.getAddress() << std::endl;
    std::cout << B.getName() << ' ' << B.getAddress() << std::endl;
}

