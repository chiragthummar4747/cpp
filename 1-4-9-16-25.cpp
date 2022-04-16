#include<iostream>
using namespace std;
int main()
{
    int x,y=0,n;
    cout<<"\n enter n:";
    cin>>n;
    for(x=1;x<=n;x++)
    {
        y=x*x;
        cout<<"\t"<<y;
    }
}    