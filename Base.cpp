#include <iostream>
using namespace std;
class Polygon
{
protected:
    int Width, Heigth;

public:
    void set_values(int a, int b)
    {
        Width = a;
        Heigth = b;
    }
};
class Rectangle :public Polygon
{
    public:
        int area()
        {
            return Width*Heigth;
        }
};
class Tringle:public Polygon
{
    public:
        int area()
        {
            return Width*Heigth/2;
        }
};
int main()
{
    Rectangle rect;
    Tringle trgl;
    rect.set_values(5,10);
    trgl.set_values(5,10);
    cout<<rect.area()<<"\n";
    cout<<trgl.area()<<"\n";

    return 0;
}