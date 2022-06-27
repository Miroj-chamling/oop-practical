#include <iostream>
using namespace std;

class test
{
protected:
    int a;

public:
    void input()
    {
        cin >> a;
    }
    void display()
    {
        cout << a << endl;
    }
};

class test_1 : public test
{
protected:
    int b;

public:
    void input()
    {
        cout << "b: ";
        cin >> b;
    }
    void display()
    {
        cout << "b:" << b << endl;
    }
};

int main()
{
    test_1 t;
    t.test::input(); // access the main class and avoiding ambiguities
    t.test::display();
}