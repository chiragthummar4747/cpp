#include<iostream>
using namespace std;
int returnvalue(int & x)
{
    cout<<"x"<<x;
        <<"the address of x is =";
        <<&x<<endl;
        return x;
}
int main()
{
    int a=20;
    int & b = returnvalue(a);
    cout<<"a="<<a;
     cout<<"the address of a=";
     cout<< & a <<endl;
     cout<<"b="<<b;
     cout<<"the address of b=";
       cout<< & b <<endl;
        return 0;

}