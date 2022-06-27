#include <iostream>
using namespace std;

class suum
{
private:
    int feet, inch;

public:
    void input();
    suum calculate(suum, suum);
    void display(suum);
};

void suum::input()
{
    cin >> feet;
    cin >> inch;
}

suum suum::calculate(suum A, suum B)
{
    suum C;
    C.feet = A.feet + B.feet;
    C.inch = A.inch + B.inch;
    if (C.inch >= 12)
    {
        C.feet = C.feet + C.inch / 12;
        C.inch = C.inch % 12;
    }
    display(C);
}

void suum::display(suum result)
{
    cout << result.feet << endl
         << result.inch;
}

int main()
{
    suum s1, s2, s3;
    s1.input();
    s2.input();
    s3.calculate(s1, s2);
}