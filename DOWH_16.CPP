#include<iostream>
using namespace std;
int main()
{
	int i,a=0,b=1,c;
	i=1;
	do
	{
		cout<<a;
		i++;
		c=a+b;
		a=b;
		b=c;
		cout<<"\t";
	}
	 while(i<=10);
	
}