#include <iostream>
#include <string>
using namespace std;

//动态多态的满足条件
//1、子类继承父类
//2、子类重写父类虚函数（重写）完全相同

//动态多态使用
//父类引用或指针指向子类对象

class Animal
{
public:
    //用virtual关键字实现虚函数
    virtual void speak()
    {
        cout << "动物在讲话" << endl;
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "小猫在说话" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "小狗在说话" << endl;
    }
};

void dospeak(Animal & animal)
{
    animal.speak();
}
void test()
{
    Cat c;
    dospeak(c);
}

void test1()
{
    Dog d;
    dospeak(d);
}

int main()
{
    test();
    test1();
    return 0;
}