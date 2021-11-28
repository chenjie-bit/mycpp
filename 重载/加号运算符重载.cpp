#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    // 必须有这个默认构造函数 否则在重载函数中无法创造变量
    Person() {}

    Person(int a, int b)
    {
        m_a = a;
        m_b = b;
    }

    Person operator+(const Person &p)
    {
        Person t;
        t.m_a = this->m_a + p.m_a;
        t.m_b = this->m_b + p.m_b;
        return t;
    }

    int m_a;
    int m_b;
};

// 双参数的重载函数只能在类外定义
Person operator+(const Person &p2, int val)
{
    Person temp;
    temp.m_a = p2.m_a + val;
    temp.m_b = p2.m_b + val;
    return temp;
}

void test()
{
    Person p1(10, 20);
    Person p2(20, 10);
    Person p3 = p2 + p1;
    cout << p3.m_b << ' ' << p3.m_a << endl;
}

void test1()
{
    Person p1(10, 20);
    Person p3 = p1 + 10;
    cout << p3.m_a << ' ';
    cout << p3.m_b << endl;
}

int main()
{
    // test();
    test1();
    return 0;
}