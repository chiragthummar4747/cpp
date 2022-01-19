#include<iostream>
using namespace std;
class Bank{
    int balance; 
    string name;
    public:
    Bank(string name,int balance)
    {
        this->name=name;
        this->balance=balance;
    }
    int withdrawal(int amt)
    {
        if(balance>=amt)
            return balance-=amt;
        else 
            return 0;

    }
    void diposit(int amt)
    {
        balance += amt;
    }
    void showbalance()
    {
        cout<<"\n name:"<<name;
        cout<<"\n balance:"<<balance;
    }
};
int main ()
{
    Bank chirag("chirag",500),harshad("harshad",700);
    chirag.showbalance();
    chirag.diposit(400);
    
    chirag.showbalance();

}