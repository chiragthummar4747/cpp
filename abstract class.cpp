#include <iostream>
using namespace std;
class Shape
{
protected:
    int Width;
    int Heigth;

public:
    virtual int getarea() = 0;
    void setWidth(int w)
    {
        Width = w;
    }
    void setHeigth(int h)
    {
        Heigth = h;
    }
};
class Rectangle : public Shape
{
public:
    int getarea()
    {
        return (Width * Heigth);
    }
};
class Triangle : public Shape
{
public:
    int getarea()
    {
        return (Width * Heigth / 2);
    }
};
int main()
{
    Rectangle Rect;
    Triangle Tri;
    Rect.setWidth(5);
    Rect.setHeigth(7);
    cout << "total Rectangle area :" << Rect.getarea()<<"\n";
    Tri.setWidth(5);
    Tri.setHeigth(7);
    cout << "total tringle area :" << Tri.getarea();

    return 0;
}