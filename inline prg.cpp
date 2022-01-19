#include<iostream>
using namespace std;
class  operation{
    int a,b,add,mul,sub;
    float div;
    public:
        void get();
        void sum();
        void diffrence();
        void product();
        void division();

};
inline void operation::get()
{
    cout<<"enter A";
    cin>>a;
    cout<<"enter B";
    cin>>b;

}
inline void operation::sum()
{
    add=a+b;
    cout<<"add two value"<<a+b;
}
inline void operation::diffrence()
{
    sub=a-b;
    cout<<"difrence two value:"<<a-b;
}
inline void operation::product()
{
    mul=a*b;
    cout<<"multiple two value:"<<a*b;
}
inline void operation::division()
{
    div=a/b;
    cout<<"division two value:"<<a/b;
}
int main()
{
    operation s;
    s.get();
    s.sum();
    s.diffrence();
    s.product();
    s.division();
    return 0;
}