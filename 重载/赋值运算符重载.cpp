#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person(int age)
    {
        //在堆区开辟年龄
        m_age = new int(age);
    }

    Person &operator=(Person &p)
    {
        if (m_age != NULL)
        {
            delete m_age;
            //防止其为野指针
            m_age = NULL;
        }

        //提供深拷贝
        m_age = new int(*p.m_age);

        return *this;
    }

    //析构函数 释放内存
    ~Person()
    {
        if (m_age != NULL)
        {
            delete m_age;
            m_age = NULL;
        }
    }

    //指针类型的变量
    int *m_age;
};

void test()
{
    Person p1(18);
    Person p2(23);
    Person p3(20);

    p3 = p2 = p1;
    cout << "p1的年龄：" << *p1.m_age << endl;
    cout << "p2的年龄：" << *p2.m_age << endl;
    cout << "p3的年龄：" << *p3.m_age << endl;
}

int main()
{
    test();
    return 0;
}