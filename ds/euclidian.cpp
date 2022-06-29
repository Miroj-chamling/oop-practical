#include <iostream>
using namespace std;

int main()
{
    int x, y, r;
    cout << "Enter x and y: ";
    cin >> x >> y;
    while (y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    cout << "the gcd is : " << x;
}