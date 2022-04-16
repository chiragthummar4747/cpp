#include<iostream>
using namespace std;
int main()
{
    int x,y=0;
    for(x=1;x<=10;x++)
    {
        if(x%2!=0)
        {
            y+=x;
        }
    }
    cout<<y;
}