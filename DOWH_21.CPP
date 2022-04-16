#include<iostream>
using namespace std;
int main()
{
	int i=0,m=0;
	do
	{
		int j=0;
		while(j<=3)
		{
			cout<<m;
			j++;
		}
		cout<<i;
		i++;
		m+=2;
		cout<<"\n";
	}
	 while(i<=3);
	
}