#include <iostream>
using namespace std;

class counter
{
    int count;

public:
    counter()
    {
        count = 0;
    }
    counter operator++()
    {
        counter c;
        ++c.count;
        return c;
    }
    counter operator++(int)
    {
        counter c;
        c.count += 2;
        return c;
    }
    void display()
    {
        cout << count;
    }
};

int main()
{
    counter c;
    c.display();
    c = ++c;
    c.display();
    c = c++;
    c.display();
}