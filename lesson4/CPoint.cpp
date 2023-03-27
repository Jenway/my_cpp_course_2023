#include <cstdlib>
#include <iostream>
using namespace std;

class CPoint
{
private:
    double x;
    double y;

public:
    double get_x() { return x; }
    double get_y() { return y; }
    void getLen_member();
    friend void getLen_friend(CPoint &c);
    CPoint(double xx = 0, double yy = 0) : x(xx), y(yy) {}
    CPoint(CPoint &c) {}
    ~CPoint() {}
};

void CPoint::getLen_member()
{
    cout << "(member) the length is" << abs(x - y) << endl;
}

void getLen_friend(CPoint &c)
{
    cout << "(friend) the length is" << abs(c.x - c.y) << endl;
}

void getLen_normal(CPoint &c)
{
    cout << "(normal) the length is" << abs(c.get_x() - c.get_y()) << endl;
}

int main(void)
{
    CPoint point(2.34, 15.78);
    point.getLen_member();
    getLen_friend(point);
    getLen_normal(point);

    return 0;
}