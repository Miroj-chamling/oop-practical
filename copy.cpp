#include <iostream>
using namespace std;

class test
{
private:
    int a;
    float b;

public:
    test(int x, float y)
    {
        a = x;
        b = y;
    }
    test(test &t) // copy constructor
    {
        a = t.a;
        b = t.b;
    }
    void display()
    {
        cout << "a : " << a << endl
             << "b : " << b << endl;
    }
};

int main()
{
    test t1(2, 2.4);
    test t2 = t1;
    cout << "original : " << endl;
    t1.display();
    cout << "copy : " << endl;
    t2.display();
}