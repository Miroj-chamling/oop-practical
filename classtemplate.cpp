#include <iostream>
#define max 20
using namespace std;

template <class t>
class stack
{
    t s[max];
    int tos;

public:
    stack()
    {
        tos = -1;
    }
    void push(t x)
    {
        s[++tos] = x;
    }
    t pop()
    {
        return s[tos--];
    }
};
int main()
{
    stack<int> s1;
    s1.push(2);
    s1.push(3);
    cout << "first pop" << s1.pop();
}