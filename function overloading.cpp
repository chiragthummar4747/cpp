#include<iostream>
using namespace std;
class Test{
    public:
    void sum(int x,int y)
    {
        cout<<"x+y="<<x+y <<endl;
    }
    int sum(int x,int y,int z)
    {
        return (x+y+z);

    }
    void sum(double x,double y)
    {
        cout<<"x+y=" <<x+y <<endl;
    }
    void sum(double x,double y, double z)
    {
        cout<<"x+y+z=" <<x+y+z <<endl;
    }

};
int main()
{
    Test t;
    t.sum(10,20);
    t.sum(23.5,45.5);
    t.sum(10.5,10.5,10.5);
    cout<<"sum"<<t.sum(1,2,2);
    return 0;
}