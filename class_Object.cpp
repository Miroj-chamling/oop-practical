#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void read()
    {
        cout << "a:";
        cin >> a;
    }
    void display()
    {
        cout << "a: " << a;
    }
};

class B
{
    A a;
    int b;

public:
    void read()
    {
        cout << "b: ";
        cin >> b;
        a.read();
    }
    void display()
    {
        a.display();
    }
};

class C
{
    int c;
    B b;

public:
    void read()
    {
        b.read();
        cout << "c: ";
        cin >> c;
    }
    void display()
    {
        b.display();
        cout << "c: " << c;
    }
};
int main()
{
    C c;
    c.read();
    c.display();
}