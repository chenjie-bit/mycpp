#include <iostream>
#include <string>
using namespace std;

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
        cout << "年龄：" << this->m_age << ' ' << "姓名：" << this->m_name << endl;
    }
    T1 m_name;
    T2 m_age;
};

// 1、指定传入类型
void PrintPerson(Person<string, int> &p)
{
    p.showPerson();
}

void test()
{
    Person<string, int> p("陈杰", 23);
    PrintPerson(p);
}

// 2、参数模版化
template <class T1, class T2>
void PrintPerson2(Person<T1, T2> &p)
{
    p.showPerson();
}

void test2()
{
    Person<string,int> p("张文海",19);
    PrintPerson2(p);
}

// 3、整个类模版化
template<class T>
void PrintPerson3(T &p)
{
    p.showPerson();
}

void test3()
{
    Person<string,int> p("陈远兴",21);
    PrintPerson3(p);
}

int main()
{
    test();
    test2();
    test3();
    return 0;
}
