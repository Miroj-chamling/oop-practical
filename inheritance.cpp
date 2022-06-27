#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    void seta()
    {
        a = 1;
    }
};

class B : virtual public A
{
protected:
    int b;

public:
    void setb()
    {
        b = 1;
    }
};

class C : virtual public A
{
protected:
    int c;

public:
    void setc()
    {
        c = 1;
    }
};

class D : public B
{
protected:
    int d;

public:
    void setd()
    {
        d = 1;
    }
};

class E : public D, public C
{
protected:
    int e;

public:
    void sete()
    {
        e = 1;
        cout << a + b + c + d + e;
    }
};

int main()
{
    E e;
    e.seta();
    e.setb();
    e.setc();
    e.setd();
    e.sete();
}