#include <iostream>
using namespace std;

int division(int a, int b)
{
    if (b == 0)
    {
        throw "zero divisior error";
    }
    return (a / b);
}

int main()
{
    int a, b, z;
    cin >> a >> b;
    try
    {
        z = division(a, b);
        cout << z;
    }
    catch (const char *e)
    {
        cout << e;
    }
}