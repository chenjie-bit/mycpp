#include <iostream>
#include <string>
using namespace std;

class Home;
class Goodgay
{
public:
    Goodgay();
    void visit();

private:
    Home *home;
};

class Home
{
    // Goodgay中的成员函数做友元
    friend void Goodgay::visit();
public:
    Home();

public:
    string m_sittingroom;

private:
    string m_bedroom;
};

Home::Home()
{
    m_sittingroom = "客厅";
    m_bedroom = "卧室";
}

Goodgay::Goodgay()
{
    home = new Home;
}

void Goodgay::visit()
{
    cout << "好基友正在访问" << home->m_sittingroom << endl;
    cout << "好基友正在访问" << home->m_bedroom << endl;
}

void test()
{
    Goodgay gg;
    gg.visit();
}

int main()
{
    test();
    return 0;
}