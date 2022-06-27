#include <iostream>
using namespace std;
int x, y;

int &great()
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    cin >> x >> y;
    great() = 100;
    if (x == 100)
    {
        cout << "x is greatter : " << x << endl
             << "y is smaller" << y;
    }
    if (y == 100)
    {
        cout << "y is greatter : " << y << endl
             << "x is smaller : " << x;
    }
}