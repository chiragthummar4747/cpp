#include<iostream>
using namespace std;
int main()
{
	int i,j;
	i=1,j=2;
	do
	{
		cout<<i<<j*j;
		i+=2;
		j+=2;
		cout<<"\t";
	}
	 while(i<=10);
	
}