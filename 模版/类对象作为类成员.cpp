#include <iostream>
#include <string>
using namespace std;

class Phone
{
public:
    Phone(string phonename) : m_phonename(phonename) {}

    ~Phone() {}

    string m_phonename;
};

class Person
{
public:
    Person(string name, string p_name) : m_name(name), m_phone(p_name) {}

    ~Person() {}

    void play_game()
    {
        cout << m_name << "正在使用" << m_phone.m_phonename << "玩游戏" << endl;
    }

    string m_name;
    Phone m_phone;
};

void test()
{
    Person p("陈杰","苹果12");
    p.play_game();
}

int main()
{
    test();
    return 0;
}