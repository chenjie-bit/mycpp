#include <iostream>
#include <string>
using namespace std;

// this指针的用法

class Person
{
public:
    Person(int age)
    {
        // 1、当形参和成员变量同名时 可以用this来区分
        this->age = age;
    }

    Person &add_age(Person &p)
    {
        this->age += p.age;
        // 返回对象本身
        return *this;
    }

    int age;
};

void test()
{
    Person p1(23);
    Person p2(10);
    p2.add_age(p1).add_age(p1);
    cout << p2.age << endl;
}

int main()
{
    test();
    return 0;
}