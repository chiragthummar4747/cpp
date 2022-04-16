#include<iostream>
using namespace std;
int main()
{
    int i,j=1;
    for(i=1;i<=10;i++)
    {
        cout<<"\t"<<i*j;
        j+=j;
    }
}