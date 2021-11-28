#include <iostream>
#include <string>
using namespace std;

// 静态成员函数特点
// 1、程序共享一个函数
// 2、静态成员函数只能访问静态成员变量

class Person
{
public:
    static void func()
    {
        cout << "静态成员函数的调用" << endl;
        m_a = 100;
        cout << m_a << endl;
        // m_b=10;错误 不能访问非静态成员变量
    }
    static int m_a;
    int m_b;
};
int Person::m_a = 10;

void test()
{
    Person p;
    p.func();
}

void test1()
{
    cout << Person::m_a << endl;
}

int main()
{
    test();
    test1();
    return 0;
}