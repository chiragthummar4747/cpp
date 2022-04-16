#include<iostream>
using namespace std;
int main()
{
    int a[10],b[10],i,sum[10];
    for(i=0;i<5;i++)
    {
        cout<<"enter the a["<<i<<"]";
        cin>>a[i];
        cout<<"enter the b["<<i<<"]";
        cin>>b[i];

    }
    for(i=0;i<5;i++)
    {
        sum[i]=a[i]+b[i];
        cout<<"\n a["<<a[i]<<"]\t\t+b["<<b[i]<<"]\t\t=c["<<sum[i]<<"]";
     }
}