#include<iostream>
using namespace std;
class bank
{
    int balance ;
    string name;
    public :
    bank(string name,int balance)
    {
        this->name=name;
        this->balance=balance;

    }
    int withdrwal(int amt)
    {
        if(balance>= amt)
            return balance-= amt;
        else
            return 0;
    }
    void diposit(int amt)
    {
        balance+=amt;
    }
    void showbalance()
    {
        cout<<"\n\n name:"<<name;
        cout<<"\n balance:"<<balance;
    }
};
int main()
{
    bank chirag("chirag",10000);
    chirag.showbalance();
    chirag.diposit(1000);
   // chirag.showbalance();
    //chirag.withdrwal(5000);
    chirag.showbalance();
        if(chirag.withdrwal(5000)!=0)
        {
            chirag.showbalance();
        }
        else 
        {
            cout<<"\n not sufficient balance....";
        }
}