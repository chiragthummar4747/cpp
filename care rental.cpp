#include<iostream> 
using namespace std;
int chose ;
class car{
    public:
        int hatch;
        int seadan;
        int suv;
        int muv;
        int rent;    
};
int car ::hatch
{
lable:    
    int sum,rent=800;
    sum=rent*day;
    cout<<sum;
    goto lable; 
}
int main ()
{
    int cars,mode,day,rent;
    car rent;
    cout<<"\t\t----------------------------welcome------------------------------------\n";
    cout<<"\n1.hatch \n2.seadan \n3.suv \n4.muv";
    cout<<"\n\nplz select a car\n";
    cin>>cars;
    switch (cars)
    {
        case 1:
            cout<<"\thatch";
        break;
        case 2:
            cout<<"\tseadan";
        break;
        case 3:
            cout<<"\tsuv";
        break;
        case 4:
            cout<<"\tmuv";
        break;

    }
    cout<<"\n\nselact a cars mode\n";
    cout<<"\n1.primium\n2.laxury";
    
    cin>>mode;
    
    switch(mode)
    {
        case 1:
            cout<<"\tprimium";
        break;
        case 2:
            cout<<"\tlaxury";
        break;
        default:
            cout<<"\tplz select a car mode";
    }
    cout<<"\n\nhowmany day";
    cin>>day;
     
}