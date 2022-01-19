#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = NULL;
    p = new int;
    // p=&a; ///address of a
    *p = a;
    cout << "value of p :" << *p << endl;

    int n = 5;
    int *q = new int[n];
    // int *q;
    for (int i = 0; i < n; i++)
        cout << q[i] <<" ";

    cout<<"value store in block of memory :";
    for(int i=0;i<n;i++)
        cout<<q[i]<<" ";

    delete p;
    delete[] q;

    cout<<"value store in block of memory :";
    for(int i=0;i<n;i++)
        cout<<q[i]<<" ";

    return 0;        
}