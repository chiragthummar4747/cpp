//scope resolution operator
#include <iostream>
using namespace std;
class operation
{
    int a, b, sub, add, mul;
    float div;

public:
    void get();
    void sum();
    void difference();
    void product();
    void division();
};
inline void operation ::get()
{
    cout << "enter first value :";
    cin >> a;
    cout << "enter second value :";
    cin >> b;
}
inline void operation ::sum()
{
    add = a + b;
    cout << "Additiopn of two number :" << a + b << "\n";
}
inline void operation ::difference()
{
    sub = a - b;
    cout << "differnce of two number :" << a - b << "\n";
}
inline void operation ::product()
{
    mul = a * b;
    cout << "product of two number :" << a * b << "\n";
}
inline void operation ::division()
{
    div = a / b;
    cout << "division of two number :" << a / b << "\n";
}
int main()
{
    cout<<" program using inline function\n";
    operation s;
    s.get();
    s.sum();
    s.difference();
    s.division();
    s.product();
    return 0;
}