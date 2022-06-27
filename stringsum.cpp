#include <iostream>
#include <string.h>
using namespace std;

class stringg
{
    char a[20];

public:
    stringg()
    {
        strcpy(a, " ");
    }
    stringg(char b[20])
    {
        strcpy(a, b);
    }
    stringg operator+(stringg add)
    {
        strcat(a, add.a);
        return a;
    }
    void display()
    {
        cout << a;
    }
};

int main()
{
    stringg s1("miroj ");
    stringg s2("rai");
    stringg s3;
    s3 = s1 + s2;
    s3.display();
}