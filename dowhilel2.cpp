#include<iostream>
using namespace std;
int main()
{
    char i=65;
    do
    {
        char j=i;
        do
        {
            cout<<j;
            j--;      
        }
        while(j>=65);
    i++;
    cout<<"\n";
    }
    while(i<=69);    
}