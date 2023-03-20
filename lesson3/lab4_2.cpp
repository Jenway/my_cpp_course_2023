#include <iostream>

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

enum RAM_TYPE
{
    DDR1 = 1,
    DDR2,
    DDR3,
    DDR4
};

enum CDROM_INSTALL_METHOD
{
    external = 1,
    built_in
};

enum CDROM_INTERFACE_TYPE
{

    SATA = 1,
    USB
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
class RAM
{
private:
    RAM_TYPE m_type;
    int m_capacity;
    float m_rate;

public:
    RAM(RAM_TYPE type, int capacity, float rate) : m_type(type), m_capacity(capacity), m_rate(rate)
    {
        cout << "构造了一个 RAM" << endl;
    }
    ~RAM() { cout << "析构了一个RAM" << endl; }

    RAM_TYPE GetRamtype() const { return m_type; }
    int GetCapacity() const { return m_capacity; }
    float GetRate() const { return m_rate; }

    void SetRamtype(RAM_TYPE type) { m_type = type; }
    void SetCapacity(int capacity) { m_capacity = capacity; }
    void SetRate(float rate) { m_rate = rate; }

    void Run() { cout << "RAM 开始运行！" << endl; }
    void Stop() { cout << "RAM 停止运行！" << endl; }
};
class CDROM
{
private:
    CDROM_INSTALL_METHOD m_CIM;
    CDROM_INTERFACE_TYPE m_CIT;
    int m_cache_vol;

public:
    CDROM(CDROM_INSTALL_METHOD CIM, CDROM_INTERFACE_TYPE CIT, int cache_vol) : m_CIM(CIM), m_CIT(CIT), m_cache_vol(cache_vol)
    {
        cout << "构造了一个 CDROM" << endl;
    }
    ~CDROM() { cout << "析构了一个CDROM" << endl; }

    CDROM_INSTALL_METHOD GetInstallMethod() const { return m_CIM; }
    CDROM_INTERFACE_TYPE GetInterfaceType() const { return m_CIT; }
    int GetCacheVol() const { return m_cache_vol; }

    void SetInstallMethod(CDROM_INSTALL_METHOD CIM) { m_CIM = CIM; }
    void SetInterfaceType(CDROM_INTERFACE_TYPE CIT) { m_CIT = CIT; }
    void SetCacheVol(int cache_vol) { m_cache_vol = cache_vol; }

    void Run() { cout << "CDROM 开始运行！" << endl; }
    void Stop() { cout << "CDROM 停止运行！" << endl; }
};
class Computer
{

private:
    CPU m_cpu;
    RAM m_ram;
    CDROM m_cdrom;

public:
    void run();
    void stop();
    Computer(CPU cpu, RAM ram, CDROM cdrom) : m_cpu(cpu), m_ram(ram), m_cdrom(cdrom)
    {
        cout << "构造了一个 Computer" << endl;
    }
    ~Computer()
    {
        cout << "析构了一个 Computer" << endl;
    }
};

void Computer::run()
{
    m_cpu.Run();
    m_ram.Run();
    m_cdrom.Run();
    cout << "Computer 开始运行！" << endl;
}
void Computer::stop()
{
    {
        m_cpu.Stop();
        m_ram.Stop();
        m_cdrom.Stop();
        cout << "Computer 停止运行！" << endl;
    }
}

int main(void)
{
    CPU cpu = CPU(P5, 400, 3.5);
    RAM ram = RAM(DDR4, 8000, 5.2);
    CDROM cdrom = CDROM(built_in, USB, 60);
    Computer computer = Computer(cpu, ram, cdrom);
    computer.run();
    computer.stop();
    return 0;
}