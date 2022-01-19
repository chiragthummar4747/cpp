#include<iostream>
using namespace std;
class base1{
    public:
    base1()
    {
        cout<<"base1";

    }
};
class base2{
    public:
    base2()
    {
        cout<<"base2";

    }
};
class base3:public base1,public base2{
    public:
    base3()
    {
        cout<<"base3";

    }
};
class derived:base3
{
    public:
    derived()
    {
        cout<<"derived";
    }
};
int main()
{
    derived d;
    return 0;
}
