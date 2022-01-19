#include <iostream>
using namespace std;
class Expensemanager
{
   int Expense ();
    public:
        
};

inline int Expensemanager ::Expense()
{
    
   
}
int main()
{
    int n, i, money[10],Total=0;
    string name[120];
    Expensemanager expense;

    cout << "\n Enter your number of people : ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "\n Enter your name : ";
        cin >> name[i];

        cout << "\n Enter deposit : ";
        cin >> money[i];
    }

    cout << "-------------------------------------";
    cout << "\n Name      Deposit \n";
    cout << "-------------------------------------\n";

    for (i = 0; i < n; i++)
    {
        cout << "  " << name[i];

        cout << "    \t" << money[i] << endl;
        Total+=money[i];
    }
    cout<<"-----------------------------------------\n";
    cout<<"Total : "<<Total<<endl;

}