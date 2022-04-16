#include<iostream>
using namespace std;
int main()
{
    int x,y=0,n;
    cout<<"\n enter n:";
    cin>>n;
    for(x=1;x<=n;x++)
    {
        if(x%2==0)
        {
            y=x*x;
            cout<<"\n"<<y;
        }
        if(x%2!=0)
        {
            cout<<"\n"<<x;
        }
    }
}