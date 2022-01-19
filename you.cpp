#include <iostream>
using namespace std;

class Youtube
{
public:
    int minute();
    int view();
    int like();
    int dislike();
    int subcriber();
    int comment();
    int share();
};

inline int Youtube ::minute()
{
    int minutes, sec, earn = 10;

    cout << "\nEnter your video watching minutes :-- ";
    cin >> minutes;
    cout << "\nEnter your video watching second :-- ";
    cin >> sec;

    minutes *= 60;
    minutes += sec;

    return minutes * 10 / 100;
}
inline int Youtube ::view()
{
    int views, earn = 10;

    cout << "\nEnter your total View :-- ";
    cin >> views;

    return views *= 0.1;
}
inline int Youtube ::like()
{
    int like, earn = 10;

    cout << "\nEnter your total Likes :-- ";
    cin >> like;

    return like *= 0.1;
}
inline int Youtube ::dislike()
{
    int dislike, earn = 10;

    cout << "\nEnter your total Dislike :-- ";
    cin >> dislike;

    return dislike *= 0.1;
}
inline int Youtube ::subcriber()
{
    int subcribers, earn = 10;

    cout << "\nEnter your total Subcriber :-- ";
    cin >> subcribers;

    return subcribers * 1 / 100;
}
inline int Youtube ::comment()
{
    int comments, earn = 10;

    cout << "\nEnter your total Comment :-- ";
    cin >> comments;

    return comments *= 0.1;
}
inline int Youtube ::share()
{
    int shares, earn = 10;

    cout << "\nEnter your total Share :-- ";
    cin >> shares;

    return shares *= 0.1;
}

int main()
{
    int minutes, views, likes, dislikes, subcribers, comments, shares, total;
    Youtube min;

    cout << "\t <----- Welcome to youtube earning calculator -----> " << endl;
    cout << "\t\t <-- Editor by chirag --> " << endl;

    cout << "-----------------------------------------------------------------";

    minutes = min.minute();
    views = min.view();
    likes = min.like();
    dislikes = min.dislike();
    subcribers = min.subcriber();
    comments = min.comment();
    shares = min.share();

    cout << "\n--------------------------------- Total Earning -------------------------------- \n";
    cout << "sec \t Vie \t lik \tdislik   sub \tcom \tsha";
    cout << "\n-------------------------------------------------------------------------------- \n";
    cout << minutes << "\t" << views << "\t" << likes << "\t" << dislikes << "\t" << subcribers << "\t" << comments << "\t" << shares << endl;

    total = minutes + views + likes - dislikes + comments + shares;
    cout << "\nTotal Earing is :- " << total;
}