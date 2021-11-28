#include <iostream>
#include <string>
using namespace std;

//继承中 先调用父类构造函数 在调用子类构造函数
//析构顺序相反

class Person
{
public:
    Person()
    {
        cout << "Person的构造函数" << endl;
    }

    ~Person()
    {
        cout << "Person的析构函数" << endl;
    }
};

class Son : public Person
{
public:
    Son()
    {
        cout << "Son的构造函数" << endl;
    }

    ~Son()
    {
        cout << "Son的析构函数" << endl;
    }
};

void test()
{
    Son s;
}

int main()
{
    test();
    return 0;
}