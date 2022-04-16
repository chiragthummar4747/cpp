#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"\n enter any char:";
    cin>>ch;
    
    if(ch>=65 && ch<=90)
    {
        ch=ch+32;
        cout<<ch;
    }
    else if(ch>=97 && ch<=122)
    {
        ch=ch-32;
        cout<<ch;
    }
    else
    {
        cout<<"ch is not valid";
    }
}