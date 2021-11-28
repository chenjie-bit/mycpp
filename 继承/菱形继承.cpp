#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    int m_age;
};

class Sheep : virtual public Animal{};
class Tuo : virtual public Animal{};
class SheepTuo : public Sheep,public Tuo{};

void test()
{
    SheepTuo st;
    st.Sheep::m_age = 10;
    st.Tuo::m_age = 30;
    cout << st.Sheep::m_age << endl;
    cout << st.Tuo::m_age << endl;
    cout << st.m_age << endl;
}

int main()
{
    test();
    return 0;
}