#include<iostream>
using namespace std;
int main()
{
	int i,j;
	i=5;
	do
	{
		j=5;
		while(j>=i)
		{
			cout<<j;
			j--;
		}
		cout<<"\n";
		i--;
	}
	 while(i>=1);
	
}