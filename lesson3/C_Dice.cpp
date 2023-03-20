#include <iostream>
#include <random>

// #include <cstdlib>
// #include <ctime>
using namespace std;

class Dice
{
private:
    // unsigned m_seed;
    int m_value;
    int m_value_1;
    int m_value_2;

public:
    void GetValue()
    {
        cout << "Player rolled " << m_value_1 << " + " << m_value_2 << " = " << m_value << endl;
    }
    // void SetSeed(unsigned seed)
    // {
    //     m_seed = seed;
    // }
    void RollDice()
    {
        random_device seed;
        ranlux48 engine(seed());
        uniform_int_distribution<> distrib(1, 6);
        m_value_1 = distrib(engine);
        m_value_2 = distrib(engine);
        m_value = m_value_1 + m_value_2;
        GetValue();
        // srand(m_seed);
        // m_value = rand() % (6 - 1 + 1) + 1;
        // (rand() % (max - min + 1)) + min;  [min,max]
    }
    Dice() : m_value(0), m_value_1(0), m_value_2(0)
    {
        // cout << "构建了一个 Dice " << endl;
    }
    ~Dice()
    {
        // cout << "析构了一个 Dice " << endl;
    }
};

int main(void)
{

    Dice dice = Dice();
    dice.RollDice();
    dice.RollDice();
}