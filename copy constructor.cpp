#include <iostream>
using namespace std;
class Point
{
    int x, y;

public:
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    Point(const Point &p2)
    {
        x = p2.x;
        y = p2.y;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
};
int main()
{
    Point objPoint1(40, 50);
    Point objPoint2 = objPoint1;
    cout << "objPoint1.x :" << objPoint1.getx() << ",objPoint1.y :" << objPoint1.gety();
    cout << "\nobjPoint2.x :" << objPoint2.getx() << ",objPoint2.y :" << objPoint2.gety();
    return 0;
}