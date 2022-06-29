#include <iostream>
using namespace std;

int convert(int n)
{
    int r, i = 1, bin = 0;
    while (n != 0)
    {
        r = n % 2;
        n = n / 2;
        bin += r * i;
        i *= 10;
    }
    return bin;
}

int main()
{
    int n, b, m, res, a, power, x = 1;
    cout << "enter b: ";
    cin >> b;
    cout << "enter n:";
    cin >> n;
    res = convert(n);
    cout << "res: " << res;
    cout << "enter m: ";
    cin >> m;
    power = b % m;

    while (res != 0)
    {
        a = res % 10;
        if (a == 1)
        {
            x = (x * power) % m;
        }
        power = (power * power) % m;
        res = res / 10;
    }
    cout << "x : " << x;
}