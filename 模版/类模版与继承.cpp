#include <iostream>
#include <string>
using namespace std;

template <class T>
class Base
{
public:
    T m;
};

// 必须知道父类中的模版类型才能继承
class Son : public Base<int>
{
};

void test()
{
    Son s1;
}

// 如果想灵活继承，子类也需要定义成模版
template <class T1, class T2>
class Son2 : public Base <T2>
{
    T1 obj;
};

void test2()
{
    Son2<int, char> s2;
}

int main()
{
    test();
    return 0;
}