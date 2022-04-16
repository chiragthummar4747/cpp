#include<iostream>
using namespace std;
int main()
{
    int i,j=1,n;
    cout<<"\n enter n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"\t "<<i*j;
        j+=j;
    }
}