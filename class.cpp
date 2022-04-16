#include <iostream>
using namespace std;
class test
{
    public:
    void dosum(int x,int y)
    {
        cout<<"\n sum:"<<x+y;
    }
    void domul(int x,int y)
    {
        cout<<"\n mul:"<<x*y;
    }
    void dosub(int x,int y)
    {
        cout<<"\n sub:"<<x-y;
    }
    void dodiv(int x,int y)
    {
        cout<<"\n div:"<<x/y;
    }
};
int main()
{
    int x=30,y=20;
    cout<<"\n beforer function call";
    test a;
    a.dosum(x,y);
    a.domul(x,y);
    a.dosub(x,y);
    a.dodiv(x,y);
    cout<<"\n after function call";
    return 0;
}    
 