#include <iostream>
using namespace std;
class Point
{
private:
    int _x;
    int _y;

public:
    Point(int x = 0, int y = 0) : _x(x), _y(y) {}
    Point(const Point &p) : _x(p._x), _y(p._y) {}
    Point &operator++();
    Point operator++(int);
    Point &operator--();
    Point operator--(int);
    void print();
};
Point &Point::operator++()
{
    _x++;
    _y++;
    return *this;
}
Point Point::operator++(int)
{
    Point temp(*this);
    _x++;
    _y++;
    return temp;
}
Point &Point::operator--()
{
    _x--;
    _y--;
    return *this;
}
Point Point::operator--(int)
{
    Point temp(*this);
    _x--;
    _y--;
    return temp;
}
void Point::print()
{
    cout << "(" << _x << "," << _y << ")" << endl;
}
int main()
{
    Point p1(1, 2);
    Point p2(3, 4);
    p1.print();
    p2.print();
    ++p1;
    p1.print();
    p2++;
    p2.print();
    --p1;
    p1.print();
    p2--;
    p2.print();
    return 0;
}
