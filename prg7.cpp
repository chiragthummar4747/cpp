#include <iostream>
using namespace std;

int chosse;

class Rent
{
public:
    int hatch(int day);
    int sedan(int day);
    int suv(int day);
    int muv(int day);
    int billgenerate(int totalrent, int day, int rent, int deposite);
};

inline int Rent ::hatch(int day)
{
lable:
    int rent = 800, sum;
    cout << "\n 1).Normal  \n 2).luxury  \t ::--";
    cin >> chosse;

    switch (chosse)
    {
    case 1:
        sum = rent * day;
        return sum;
        break;
    case 2:
        sum = rent * day * 3;
        return sum;
        break;

    case 3:
        return 0;
        break;

    default:
        cout << "\n ----------- plz select any one ----------- \n";
        goto lable;
        break;
    }
}
inline int Rent ::sedan(int day)
{
lable:
    int rent = 1200, sum;
    cout << "\n 1).Normal  \n 2).luxury  \t ::--";
    cin >> chosse;
    switch (chosse)
    {
    case 1:
        sum = rent * day;
        return sum;
        break;
    case 2:
        sum = rent * day * 3;
        return sum;
        break;

    default:
        cout << "\n ----------- plz select any one ----------- \n";
        goto lable;
        break;
    }
}
inline int Rent ::suv(int day)
{
lable:
    int rent = 1600, sum;
    cout << "\n 1).Normal  \n 2).luxury  \t ::--";
    cin >> chosse;
    switch (chosse)
    {
    case 1:
        sum = rent * day;
        return sum;
        break;
    case 2:
        sum = rent * day * 3;
        return sum;
        break;

    default:
        cout << "\n ----------- plz select any one -----------\n";
        goto lable;
        break;
    }
}
inline int Rent ::muv(int day)
{
lable:
    int rent = 2000, sum;
    cout << "\n 1).Normal  \n 2).luxury  \t ::--";
    cin >> chosse;
    switch (chosse)
    {
    case 1:
        sum = rent * day;
        return sum;
        break;
    case 2:
        sum = rent * day * 3;
        return sum;
        break;

    default:
        cout << "\n ----------- plz select any one -----------\n";
        goto lable;
        break;
    }
}
inline int Rent ::billgenerate(int totalrent, int day, int rent, int deposite)
{
    int total, carent;
    cout << "\n\n ------------------------- CAR RENT BILL ------------------------- \n";
    cout << "    Cars \t Nor/Luxy \t  Rent\t Deposite    Pay";
    cout << "\n-----------------------------------------------------------\n";

    total = rent / day;

    if (total == 800 || total == 2400)
    {
        cout << "1). HATCH";
    }
    else if (total == 1200 || total == 3600)
    {
        cout << "1). SEDAN";
    }
    else if (total == 1600 || total == 4800)
    {
        cout << "1). SUV  ";
    }
    else
    {
        cout << "1). MUV  ";
    }

    if (deposite == 2000)
    {
        cout << "\tNormal CAR";
    }
    else
    {
        cout << "\tLuxury car";
    }

    cout << "\t  " << rent;
    cout << "\t   " << deposite;
    cout << "\t     " << rent + deposite<<"\n\n";

    return 0;
}
int main()
{
    int day, choss, sum, returnday, totalrent, deposite, billgene ,retur;
    Rent car;

    cout << "Welcome to CAR RENT app \n"
         << endl;

    cout << "\n-------------------- Plz select car for your need --------------------\n"
         << endl;

lable:

    cout << "\n\n 1).HATCH  \n 2).SEDAN  \n 3).SUV  \n 4).MUV  \t::-- ";
    cin >> chosse;

    switch (chosse)
    {
    case 1:

        cout << "\n---> How many days ::--  ";
        cin >> day;
        sum = car.hatch(day);
        break;

    case 2:

        cout << "\n---> How many days ::--  ";
        cin >> day;
        sum = car.sedan(day);
        break;

    case 3:

        cout << "\n---> How many days ::--  ";
        cin >> day;
        sum = car.suv(day);
        break;

    case 4:

        cout << "\n---> How many days ::--  ";
        cin >> day;
        sum = car.muv(day);
        break;

    default:

        cout << "\n -------------------- Error for select car -------------------- \n";
        goto lable;
        break;
    }

    if (sum == 0)
    {
        goto lable;
    }
    else if (sum != 0)
    {
    lable3:
        cout << "\n 1).Conform \n 2).Exit \t ::-- ";
        cin >> choss;

        switch (choss)
        {
        case 1:
            goto lable2;
            break;
        case 2:
            goto lable;
            break;
        default:
            cout << "\n ----------- Plz select any one ----------- \n";
            goto lable3;
            break;
        }
    }
    else
    {
    lable2:

        cout << "\n--------------------------------------------------------------------------\n";
        cout << "\n I).Normal car deposite :- 2000 \n II).Luxury car deposite :- 5000\n";

        if (chosse == 1)
        {
            deposite = 2000;
            cout << "\n 1).Total Rent :- " << sum << "\n 2).Deposite :- " << deposite;
        }
        else
        {
            deposite = 5000;
            cout << "\n 1).Total Rent :- " << sum << "\n 2).Deposite :- " << deposite;
        }

        cout << "\n\n Total Rent :-  " << deposite + sum;
        cout << "\n--------------------------------------------------------------------------\n";
        cout << "\n 1).Conform  \n 2).Exit ";

        switch (choss)
        {
        case 1:
            goto lable4;
            break;
        case 2:
            goto lable;
            break;

        default:
            cout << "\n ----------- Plz select any one ----------- \n";
            goto lable2;
            break;
        }
    }
lable4:
    billgene = car.billgenerate(totalrent, day, sum, deposite);


    cout<<"Return :- ";
    cin>>retur;
}