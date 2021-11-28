#include <iostream>
#include <string>
using namespace std;

class Person
{
    friend ostream &operator<<(ostream &out, Person &p);

public:
    Person(int a, int b)
    {
        m_a = a;
        m_b = b;
    }

private:
    int m_a;
    int m_b;
};

//全局函数实现左移重载
//ostream对象只能有一个
ostream &operator<<(ostream &out, Person &p)
{
    out << "a:" << p.m_a << "b:" << p.m_b;
    return out;
}

void test()
{
    Person p(10, 20);
    cout << p << "hello" << endl;
}

int main()
{
    test();
    return 0;
}