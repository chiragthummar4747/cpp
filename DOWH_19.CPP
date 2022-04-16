#include<iostream>
using namespace std;
int main()
{
	int i=0;
	do
	{
		int j=0;
		while(j<=3)
		{
			cout<<i,j++;
		}
		cout<<"\n";
		i++;
	}
	while(i<=3);
	
}