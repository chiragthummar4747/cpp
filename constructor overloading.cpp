#include<iostream>
using namespace  std;
class sum{
    public:
    sum(int x,int y)
    {
        cout<<"x+y:"<<x+y <<endl;

    }
    sum(double x , double y)
    {
        cout<<"x+y:"<<x+y <<endl;
    }
    sum(double x,double y,double z)
    {
        cout<<"x+y+z:"<<x+y+z <<endl;
    }

};
int main()
{
    sum do1(10,20),do2(10.5,20.5),do3(10.5,20,23.5) ;
    return 0;
}