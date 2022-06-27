#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex operator+(complex c1)
    {
        complex c;
        c.a = a + c1.a;
        c.b = b + c1.b;
        return c;
    }
    void display()
    {
        cout << a << "+" << b << "i";
    }
};

int main()
{
    complex c1(2, 2);
    complex c2(2, 2);
    complex c3;
    c3 = c1 + c2;
    c3.display();
}