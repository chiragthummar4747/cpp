#include<iostream>
using namespace std;
class base1
{
    public:
    base1()
    {
        cout<<"base1";
    }
};
class derived1:public base1
{
    public:
    derived1()
    {
        cout<<"derived1";
    }
};
class dervied2:public derived1
{
    public:
    dervied2()
    {
        cout<<"derived2";
    }
};
int main()
{
    dervied2 d;
     return 0;
}