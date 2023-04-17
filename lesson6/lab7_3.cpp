#include <iostream>

using namespace std;

class vehicle
{
private:
    int MaxSpeed;
    int Weight;

public:
    void Run() { cout << "vehicle run" << endl; }
    void Stop() { cout << "vehicle stop" << endl; }
    vehicle(int maxSpeed, int weight) : MaxSpeed(maxSpeed), Weight(weight)
    {
        cout << "vehicle constructor" << endl;
    }
    ~vehicle()
    {
        cout << "vehicle destructor" << endl;
    }
};

class bicycle : virtual public vehicle
{
private:
    int Height;

public:
    bicycle(int maxSpeed, int weight, int height) : vehicle(maxSpeed, weight), Height(height)
    {
        cout << "bicycle constructor" << endl;
    }
    ~bicycle()
    {
        cout << "bicycle destructor" << endl;
    }
};

class motorcar : virtual public vehicle
{
private:
    int SeatNum;

public:
    motorcar(int maxSpeed, int weight, int seatNum) : vehicle(maxSpeed, weight), SeatNum(seatNum)
    {
        cout << "motorcar constructor" << endl;
    }
    ~motorcar()
    {
        cout << "motorcar destructor" << endl;
    }
};

class motorcycle : public bicycle, public motorcar
{
public:
    motorcycle(int maxSpeed, int weight, int height, int seatNum) : vehicle(maxSpeed, weight), bicycle(maxSpeed, weight, height), motorcar(maxSpeed, weight, seatNum)
    {
        cout << "motorcycle constructor" << endl;
    }
    ~motorcycle()
    {
        cout << "motorcycle destructor" << endl;
    }
};

int main(void)
{
    motorcycle m(1, 2, 3, 4);
    return 0;
}