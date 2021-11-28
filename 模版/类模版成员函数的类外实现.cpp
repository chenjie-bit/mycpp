#include <iostream>
#include <string>
using namespace std;

// 类内实现
#if 0
template <class T1, class T2>
class Person
{
public:
    Person(T1 name, T2 age)
    {
        this->m_name = name;
        this->m_age = age;
    }

    void showPerson()
    {
        cout << "名字：" << this->m_name << endl;
        cout << "年龄：" << this->m_age << endl;
    }

    T1 m_name;
    T2 m_age;
};
#endif

template <class T1, class T2>
class Person
{
public:
    Person(T1 name, T2 age);
    void showPerson();
    T1 m_name;
    T2 m_age;
};

// 构造函数类外实现
template <class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
    this->m_name = name;
    this->m_age = age;
};

// 成员函数类外实现
template <class T1, class T2>
void Person<T1, T2>::showPerson()
{
    cout << "名字：" << this->m_name << endl;
    cout << "年龄：" << this->m_age << endl;
}

void test()
{
    Person<string,int> p("陈杰",23);
    p.showPerson();
}

int main()
{
    test();
    return 0;
}