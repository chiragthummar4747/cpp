#include<iostream>
using namespace std;
class bank
{
    int balance=500000;

public:
    int dowithdrawal()
    {
        int wd,a;
        cout<<"\n enter amount:";
        cin>>a;
        if(a>=100&&a<=(balance-a))
        {
            wd=balance-a;
            balance=wd;
            cout<<"\n total balance"<<balance;
        }
        else
        {
            cout<<"\n sorry !\n invalid balance in your account";
        }
        return wd;
    }
    int dodiposit()
    {
        int d,b;
        cout<<"\n enter amount";
        cin>>b;
        if(b<=300000&&b>=0)
        {
            d=balance+b;
        }
        else
        {
            cout<<"\n sorry \n less than 300000 amount deposit";
        }
        balance =d;
        cout<<"\n total balance:"<<balance;
        return d;
    }  
    int docheckbalance()
    {
        int a;
        a=balance;
        cout<<"\n total balance:"<<a;
    }
         
};  