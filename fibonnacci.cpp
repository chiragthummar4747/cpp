#include<iostream>
using namespace std;
int main()
{
    int i,a=0,b=1,c,n;
    cout<<"\n enter n:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<"\t"<<a;
        c=a+b;
        a=b;
        b=c;
    }
}    