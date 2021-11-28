#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person(string name, int age)
    {
        m_name = name;
        m_age = age;
    }

    bool operator==(Person &p)
    {
        if (this->m_name == p.m_name && this->m_age == p.m_age)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool operator!=(Person &p)
    {
        if (this->m_name == p.m_name && this->m_age == p.m_age)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    string m_name;
    int m_age;
};

void test()
{
    Person p1("陈杰", 23);
    Person p2("张文海", 20);
    if (p1 == p2)
    {
        cout << "p1==p2" << endl;
    }
    else
    {
        cout << "p1!=p2" << endl;
    }
}

void test1()
{
    Person p1("陈杰", 23);
    Person p2("陈杰", 23);
    if (p1 != p2)
    {
        cout << "p1!=p2" << endl;
    }
    else
    {
        cout << "p1==p2" << endl;
    }
}

int main()
{
    test();
    test1();
    return 0;
}