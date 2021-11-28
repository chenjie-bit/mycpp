#include <iostream>
#include <string>
using namespace std;

class Myinteger
{
    friend ostream &operator<<(ostream &out, Myinteger myint);

public:
    Myinteger()
    {
        m_num = 0;
    }

    //先++ 再返回
    Myinteger &operator++()
    {
        m_num++;
        return *this;
    }

    //先返回 再++
    Myinteger operator++(int)
    {
        Myinteger t = *this;
        m_num++;
        return t;
    }

private:
    int m_num;
};

ostream &operator<<(ostream &out, Myinteger myint)
{
    out << myint.m_num;
    return out;
}

void test()
{
    Myinteger m;
    cout << m++ << endl;
    cout << m << endl;
}

void test1()
{
    Myinteger m;
    cout << ++m << endl;
    cout << m << endl;
}

int main()
{
    test();
    test1();
    return 0;
}