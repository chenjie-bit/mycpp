#include <iostream>
#include <string>
using namespace std;

// 用关键字 friend 来声明友元

class Home
{
    friend void goodgay(Home *home);
public:
    Home()
    {
        m_sittingroom = "客厅";
        m_bedroom = "卧室";
    }

public:
    string m_sittingroom;

private:
    string m_bedroom;//受保护的属性值 只有友元可以访问
};

//此为全局函数 全局函数做友元
void goodgay(Home *home)
{
    cout << "好基友正在访问" << home->m_sittingroom << endl;
    cout << "好基友正在访问" << home->m_bedroom << endl;
}

void test()
{
    //创建一个Home变量h而不是指针 然后再把h的地址传进去
    Home h;
    goodgay(&h);
}

int main()
{
    test();
    return 0;
}