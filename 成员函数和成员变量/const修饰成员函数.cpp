#include <iostream>
#include <string>
using namespace std;

// const 修饰的成员函数称为 常函数 其属性值与行为不可修改

class Person
{
public:
    Person()
    {
        m_a = 0;
        m_b = 0;
    }

    void showPerson() const
    {
        // m_a=10;错误 const修饰的成员函数不能修改属性值
        // this=NULL;错误 也不能修改指针的指向
        m_b = 100; //正确 m_b为可修改变量
        cout << m_b << endl;
    }

    void func1()
    {
        m_a = 100; //正确 该成员函数不是常函数
        cout << m_a << endl;
    }

public:
    int m_a;
    mutable int m_b; //可修改变量
};

void test()
{
    const Person p; //const 修饰的对象称为 常对象
    p.showPerson(); //常对象可以访问常函数
    // p.func1();错误 常对象只能访问常函数
    
    cout << p.m_a << endl;
    cout << p.m_b << endl;
}

int main()
{
    test();
    return 0;
}