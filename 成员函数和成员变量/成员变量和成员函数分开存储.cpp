#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person() {}

    // 非静态成员函数也不占对象空间 所有函数共享一个函数实例
    void fun1() {}

    // 静态成员函数不占对象空间
    static void fun2() {}

    // 非静态成员变量占对象空间
    int m_a;

    // 静态成员变量不占对象空间
    static int m_b;
};

int main()
{
    cout << sizeof(Person) << endl;
    return 0;
}