#include "Person.h"

template <class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
    this->m_name = name;
    this->m_age = age;
}

template <class T1, class T2>
void Person<T1, T2>::showPerson()
{
    cout << "名字：" << this->m_name << endl;
    cout << "年龄：" << this->m_age << endl;
}