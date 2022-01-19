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
    int rentconform(int sum);
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
inline int Rent ::rentconform(int sum)
{
    int deposite;

    cout<<"\n--------------------------------------------------------------------------\n";
    cout << "\n I).Normal car deposite :- 2000 \n II).Luxury car deposite :- 5000\n";

    if (chosse == 1)
    {
        deposite = 2000;
        cout << "\n 1).Total Rent :- " << sum << "\n 2).Deposite :- " << deposite;
        return sum + deposite;
    }
    else
    {
        deposite = 5000;
        cout << "\n 1).Total Rent :- " << sum << "\n 2).Deposite :- " << deposite;
        return sum + deposite;
    }
}

int main()
{
    int day, choss, sum, returnday, totalrent;
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

        cout << "\n .How many days ::--  ";
        cin >> day;
        sum = car.hatch(day);
        break;

    case 2:

        cout << "\n .How many days ::--  ";
        cin >> day;
        sum = car.sedan(day);
        break;

    case 3:

        cout << "\n .How many days ::--  ";
        cin >> day;
        sum = car.suv(day);
        break;

    case 4:

        cout << "\n .How many days ::--  ";
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

        totalrent = car.rentconform(sum);

        cout << "\n\n Total Rent :-  " << totalrent;
        cout<<"\n--------------------------------------------------------------------------\n";
        cout << "\n\n 1).Conform  \n 2).Exit ";

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

    cout << "\n\nthanks for visit";

    

}