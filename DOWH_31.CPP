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
			if(i%2==0)
			{
				cout<<(char)(k+32);
			}
			else
			{
				cout<<k;
			}
			k++;
			j++;
		}
		cout<<"\n";
		i++;
	}
	while(i<=5);
	
}
