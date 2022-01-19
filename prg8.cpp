#include <iostream>
#include <ctime>
using namespace std;

void age(int currentday, int currentmonth, int currentyear, int birthday, int birthmonth, int birthyear)
{
    int day, month, year;
    int md[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    year = currentyear - birthyear;

    if (currentmonth < birthmonth)
    {
        year--;
        month = 12 - (birthmonth - currentmonth);
    }
    else
    {
        month = currentmonth - birthmonth;
    }
    if (currentday < birthday)
    {
        month--;
        day = md[currentmonth - 1] - (birthday - currentday);
    }
    else
    {
        day = currentday - birthday;
    }

    cout << "\n----------------------- Enter Current date -----------------------\n";

    cout << "\nAge Calculator :- ";
    cout << year << " Year " << month << " Month " << day << " Day ";

    cout << endl;
}

int main()
{
    int birthday, birthmonth, birthyear, month, year, day;

    time_t tmNow;
    tmNow = time(NULL);
    struct tm t = *localtime(&tmNow);

    day = t.tm_mday;
    month = t.tm_mon + 1;
    year = t.tm_year + 1900;

    cout << "Current Date: " << day << "-" << month << "-" << year;
    cout << endl;

    cout << "\n----------------------- Enter Birth date -----------------------\n";

    cout << "\n Enter Birth Day :- ";
    cin >> birthday;
    cout << "\n Enter Birth Month :- ";
    cin >> birthmonth;
    cout << "\n Enter Birth Year :- ";
    cin >> birthyear;

    age(day, month, year, birthday, birthmonth, birthyear);
}