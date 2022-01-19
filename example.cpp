#include <iostream>
using namespace std;
class Example
{
public:
    int a, b;
    Example() {}
    Example(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    Example add(Example E1, Example E2)
    {
        Example E;
        E.a = E1.a + E2.a;
        E.b = E1.b + E2.b;
        return E;
    }
};
int main()
{
    Example E1(10, 20), E2(30, 40), E3;
    E3 = E3.add(E1, E2);
    cout << " \n E1 a " << E1.a << " b " << E1.b;
    cout << " \n E2 a " << E2.a << " b " << E2.b;
    cout << "\n\n E3 a" << E3.a << " b " << E3.b;
    return 0;
}