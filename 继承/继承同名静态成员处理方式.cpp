#include <iostream>
#include <string>
using namespace std;

class Base
{
public:
    static void func()
    {
        cout << "Base下的func的调用" << endl;
    }
    static int m_a;
};

int Base::m_a = 100;

class Son : public Base
{
public:
    static void func()
    {
        cout << "Son下的func的调用" << endl;
    }
    static int m_a;
};

int Son::m_a = 200;

void test()
{
    //1.1通过对象调用成员属性和成员函数
    Base b;
    Son s;
    cout << b.m_a << endl;
    cout << s.m_a << endl;
    b.func();
    s.func();
}

void test1()
{
    //1.2通过类直接调用成员属性和成员函数
    cout << Base::m_a << endl;
    cout << Son::m_a << endl;
    Base::func();
    Son::func();
}


int main()
{
    test();
    test1();
    return 0;
}