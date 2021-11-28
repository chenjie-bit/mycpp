#include <iostream>
#include <string>
using namespace std;

// 静态成员变量特点
// 1、在编译阶段分配内存
// 2、类内声明 类外初始化
// 3、所有对象共享同一份数据

class Person
{
public:
    static int m_a;
};
int Person::m_a = 10;

// 静态成员变量的两种访问方式
void test()
{
    // 1、通过对象
    Person p1;
    p1.m_a = 100;
    cout << "p1中m_a=" << p1.m_a << endl;

    // 2、通过类名
    cout << "m_a=" << Person::m_a << endl;
}

int main()
{
    test();
    return 0;
}