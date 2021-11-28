#include <iostream>
#include <string>
using namespace std;
// 第一种解决方式 直接包含源文件
#include "Person.cpp"

// 第二种方式 将.h 和.cpp文件写在一起 成为.hpp文件

void test()
{
    Person<string, int> p("陈杰", 23);
    p.showPerson();
}

int main()
{
    test();
    return 0;
}