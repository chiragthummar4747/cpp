#include<iostream>
using namespace std;
int main()
{
	char i,j,k=65;
	i=1;
	do
	{
		j=1;
		while(j<=i)
		{
			cout<<k++;
			j++;
		}
		cout<<"\n";
		i++;
	}
	while(i<=5);
	
}
