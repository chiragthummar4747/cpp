#include<iostream>
using namespace std;
class Myclass
{
    public:
    Myclass()//default
    {
        cout<<"\n Default Construction Called";
    }
};

int main()
{
    Myclass obj1,obj2;
    cout<<"\n\t something work";
    Myclass obj3;
}