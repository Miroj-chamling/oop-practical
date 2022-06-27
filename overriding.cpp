#include <iostream>
using namespace std;

class base
{
public:
    virtual void print()
    {
        cout << "this is base class";
    }
    void show()
    {
        cout << "show base class";
    }
};

class derived : public base
{
    void print()
    {
        cout << "this is derived class";
    }
    void show()
    {
        cout << "show derived class";
    }
};

int main()
{
    base *bptr = new derived;
    bptr->print();
    bptr->show();
}