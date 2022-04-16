#include<iostream>
using namespace std;
int main()
{
	int i,j=1;
	i=1;
	do
	{
		cout<<i*j;
		i++;
		j+=j;
		cout<<"\t";
	}
	 while(i<=10);
	
}