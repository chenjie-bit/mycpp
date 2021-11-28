#include <iostream>
#include <string>
using namespace std;

class Home
{
    friend class Goodgay;
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

class Goodgay
{
public:
    Goodgay();
    void visit();
    Home *home;
};

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