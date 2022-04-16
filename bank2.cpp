#include <iostream>
using namespace std;
class Bank
{
    int balance = 10000;

public:
    Bank()
    {
        int a;
        a = balance;
        cout << "\n Total Balance:" << a;
    }
    int dowithdrawal()
    {
        int wd, a;
        cout << "\n Enter Amount:";
        cin >> a;
        if (a % 100 == 0)
        {
            if (a >= 100 && a <= (balance - 100))
            {
                wd = balance - a;
                balance = wd;
                cout << "\n Total Balance:" << balance;
            }
            else
            {
                cout << "\n Sorry \n Invelid Balance In Your Account.";
            }
        }
        else
        {
            cout << "\n Ple Enter the Amount 100 *.";
        }
        return wd;
    }
    int dodiposit()
    {
        int d, b;
        cout << "\n Enter Amount:";
        cin >> b;
        if (b <= 50000 && b >= 0)
        {
            d = balance + b;
        }
        else
        {
            cout << "\n Sorry\n Less Then 50000 Amount Diposit. ";
        }
        balance = d;
        cout << "\n Total Balance:" << balance;

        return d;
    }
    int docheackbalance()
    {
        int a;
        a = balance;
        cout << "\n Total Balance:" << a;
    }
};
int main()
{
    int x, z, q, balance = 10000, withdrawal, diposit, check_balance;
    Bank account;
    cout << "Enter the PIN NO.";
    cin >> q;
    if (q == 0000)
    {

        do
        {

            cout << "\n\n Total Amount:" << balance;
            cout << "\n1 Withdrawal";
            cout << "\n2 Diposit";
            cout << "\n3 Check Balance";
            cout << "\n0 Exit";
            cout << "\n Enter Your Choise:";
            cin >> x;

            switch (x)
            {
            case 1:
                account.dowithdrawal();
                break;
            case 2:
                account.dodiposit();
                break;
            case 3:
                account.docheackbalance();
                break;
            case 0:
            cout << "Continue for Bank Servis(Yes=1 / No=0)";
            cin >> z;
            if (z == 0)
            {
                x = 0;
            }
            else
            {
                cout << " ";
            }
                break;
            default:
                cout << "Wrong Choise:";
                break;
            }

            
        } while (x != 0);
    }
    else
    {
        cout << " Ple Enter The carrect PIN. ";
    }
    cout << "Thank you For Banking";
}