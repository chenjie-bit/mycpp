#include <iostream>
#include <string>
using namespace std;

class Myprint
{
public:
    void operator()(string text)
    {
        cout << text << endl;
    }
};

void test()
{
    Myprint myprint;
    myprint("hello world!");
}

class Myadd
{
public:
    int operator()(int a, int b)
    {
        return a + b;
    }
};

void test1()
{
    Myadd myadd;
    cout << myadd(3, 4) << endl;
}

int main()
{
    test();
    test1();
    return 0;
}