#include <iostream>
using namespace std;
class vehicle
{
public:
    virtual void Run() = 0;
    virtual void Stop() = 0;
};
class bicycle : public virtual vehicle
{
public:
    void Run() override
    {
        cout << "bicycle run" << endl;
    }
    void Stop() override
    {
        cout << "bicycle stop" << endl;
    }
};
class car : public virtual vehicle
{
public:
    void Run() override
    {
        cout << "car run" << endl;
    }
    void Stop() override
    {
        cout << "car stop" << endl;
    }
};
class motocar : public bicycle, public car
{
public:
    void Run() override
    {
        cout << "motocar run" << endl;
    }
    void Stop() override
    {
        cout << "motocar stop" << endl;
    }
};
int main()
{
    vehicle *p;
    bicycle b;
    car c;
    motocar m;
    p = &b;
    p->Run();
    p->Stop();
    p = &c;
    p->Run();
    p->Stop();
    p = &m;
    p->Run();
    p->Stop();
    return 0;
}
