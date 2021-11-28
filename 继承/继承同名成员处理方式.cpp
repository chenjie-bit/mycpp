#include <iostream>
#include <string>
using namespace std;

//子类对象可以直接访问子类中同名成员
//子类对象加作用域可以访问父类成员
//子类加作用域可以访问父类函数

class Base
{
public:
    Base()
    {
        m_a = 100;
    }

    void func()
    {
        cout << "Base下的func的调用" << endl;
    }
    int m_a;
};

class Son : public Base
{
public:
    Son()
    {
        m_a = 200;
    }

    void func()
    {
        cout << "Son下func的调用" << endl;
    }
    int m_a;
};

void test()
{
    Base b;
    b.func();
    Son s;
    s.func();
    s.Base::func();
    cout << s.m_a << endl;
    cout << s.Base::m_a << endl;
}

int main()
{
    test();
    return 0;
}