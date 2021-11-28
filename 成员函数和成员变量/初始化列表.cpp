#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    // // 传统方式初始化
    // Person(int a, int b, int c)
    // {
    //     m_A = a;
    //     m_B = b;
    //     m_C = c;
    // }

    // 初始化列表方法
    Person(int a,int b, int c):m_A(a),m_B(b),m_C(c){}

private:
    int m_A;
    int m_B;
    int m_C;
};

int main()
{
    Person(1,2,3);
    return 0;
}