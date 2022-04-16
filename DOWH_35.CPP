#include<iostream>
using namespace std;
int main()
{
	int i,j,k=1;
	i=1;
	do
	{
		j=1;
		while(j<=i)
		{
			cout<<(k++)%2;
			j++;
		}
		cout<<"\n";
		i++;
	}
	while(i<=5);
	
}
