#include<iostream>
using namespace std;
int main ()
{
   int i,j,sp=5;
   for(i=0;i<5;i++)
   {
       for(j=0;j<=sp;j++)
            cout<<" ";
      for(j=0;j<=i;j++)
      {
         cout<<"*";
      }
      cout<<"\n";
      sp--;
   }
   
   for(i=0;i<=5;i++)
   {
       for(j=0;j<=sp;j++)
            cout<<" ";
      for(j=5;j>=i;j--)
      {
         cout<<"*";
      }
      cout<<"\n";
      sp++;
   }
}