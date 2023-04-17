class Point
{
private:
    int _x;
    int _y;

public:
    Point(int x, int y) : _x(x), _y(y) {}
    Point(const Point &p) : _x(p._x), _y(p._y) {}
    Point &operator++()
    {
        ++_x;
        ++_y;
        return *this;
    }
    Point operator++(int)
    {
        Point temp(*this);
        ++_x;
        ++_y;
        return temp;
    }
};

int main()
{
    Point p1(1, 2);
    Point p2 = ++p1;
    Point p3 = p1++;
    return 0;
}