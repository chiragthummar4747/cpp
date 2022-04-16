#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],i,j;
       cout<<"\n 2d array input:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"\n a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
            cin>>b[i][j];
            
        }
    }
       cout<<"\n the 2-D array is:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"\t"<<a[i][j];
            cout<<"\t"<<b[i][j];
        }
        cout<<"\n";
     }
}
