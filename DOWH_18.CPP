#include<iostream>
using namespace std;
int main()
{
	char ch;
	ch=65;
	do
	{
		if(ch>=65 && ch<=90)
		{
			cout<<ch;
			ch=ch+34;
		}
		if(ch>=99 && ch<=122)
		{
			cout<<ch;
			ch=ch-32;
			ch+=2;
		}
		cout<<"\t";
	}
	 while(ch<=122);
	
}