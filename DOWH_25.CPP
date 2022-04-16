

#include<iostream>
using namespace std;
int main()
{
	int i,j;
	i=1;
	do
	{
		j=1;
		while(j<=i)
		{
			cout<<j,i;
			j++;
		}
		cout<<"\n";
		i++;
	}
	while(i<=5);
	
}