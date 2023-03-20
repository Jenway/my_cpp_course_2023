#include <iostream>
using namespace std;

enum Core
{
    Single,
    Dual,
    Quad
};
enum WordLen
{
    Bit_32,
    Bit_64
};
enum HyperAble
{
    Support,
    UnSupport
};

class cpu
{
private:
    unsigned m_frequency : 32;
    Core m_core : 3;
    WordLen m_word : 2;
    HyperAble m_hyper : 2;

public:
    cpu(unsigned frequency, Core core, WordLen word, HyperAble hyper) : m_frequency(frequency), m_core(core), m_word(word), m_hyper(hyper)
    {
    }
    ~cpu() {}
};

int main(void)
{
    cpu C(300000, Quad, Bit_64, Support);
    cout << "Size of it:" << sizeof(cpu) << endl;

    return 0;
}