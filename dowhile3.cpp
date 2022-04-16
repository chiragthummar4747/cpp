#include<iostream>
using namespace std;
int main()
{
    int i=5;
    do
    {
        int j=i;
        do
        {
            cout<<j;
            j++;
        }
        while(j<=5);
    i--;
    cout<<"\n";        
    }
    while(i>=1);
}   