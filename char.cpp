#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"\n enter character";
    cin>>ch;
    if(ch<='e')
    {
        cout<<"\n character before e"<<ch;
    }
    else if(ch>='e' && ch<='i')
    {
        cout<<"\n character between e and j"<<ch;
    }
    else if(ch>='j' && ch<='o')
    {
        cout<<"\n character between j and o"<<ch;
    }
    else if(ch>='o' && ch<='t')
    {
        cout<<"\n character between o and t"<<ch;
    }
    else if(ch>='t' && ch<='y')
    {
        cout<<"\n character between t and y"<<ch;
    }
    else if(ch>='y')
    {
        cout<<"\n character after y"<<ch;
    }
}    