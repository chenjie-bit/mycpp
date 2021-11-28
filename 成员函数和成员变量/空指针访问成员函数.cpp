#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    void showclassname()
    {
        cout << "这是Person类" << endl;
    }

    void showperson()
    {
        if (this == NULL)
        {
            return;
        }
        cout << m_age << endl;
    }
    int m_age;
};

void test()
{
    Person *p=NULL;
    p->showclassname();//空指针 可以调用成员函数
    p->showperson();//如果成员函数中用到了this指针 就不行了
}

int main()
{
    test();
    return 0;
}