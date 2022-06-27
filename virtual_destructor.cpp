#include <iostream>
using namespace std;

class base
{
public:
    virtual ~base()
    {
        cout << "base destructor";
    }
};

class derived : public base
{
public:
    ~derived()
    {
        cout << "derived destructor";
    }
};
int main()
{
    base *bptr = new derived;
    delete bptr;
}