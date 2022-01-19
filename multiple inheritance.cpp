
#include<iostream>
using namespace std;
class Base1{
    public:
    Base1()
    {
        cout<<"\n base1";
    }
};
class Base2{
    public:
    Base2()
    {
        cout<<"base2";

    }
};
class Base3{
    public:
    Base3()
    {
        cout<<"base3";

    }
};
class derived:public Base3,public Base2,public Base1
{
    public:
    derived()
    {
        cout<<"\n derived ";
    }
};
int main ()
{
    derived d;
}
