#include <ioStream>
using namespace std;

enum CPU_RANK
{
    P1 = 1,
    P2,
    P3,
    P4,
    P5,
    P6,
    P7
};

class CPU
{
private:
    CPU_RANK rank;
    int frequency;
    float voltage;

public:
    CPU(CPU_RANK r, int f, float v) : rank(r), frequency(f), voltage(v)
    {
        cout << "构造了一个 CPU" << endl;
    }
    ~CPU() { cout << "析构了一个CPU" << endl; }

    CPU_RANK GetRank() const { return rank; }
    int GetFrequency() const { return frequency; }
    float GetVoltage() const { return voltage; }

    void SetRank(CPU_RANK r) { rank = r; }
    void SetFrequency(int f) { frequency = f; }
    void SetVoltage(float v) { voltage = v; }

    void Run() { cout << "CPU 开始运行！" << endl; }
    void Stop() { cout << "CPU 停止运行！" << endl; }
};

int main(void)
{
    CPU a(P6, 300, 2.8);
    a.Run();
    a.Stop();

    return 0;
}