// cartesian product
#include <iostream>
using namespace std;

int main()
{
    int A[10], B[10], U[20], I[10], cA[10], cB[10];
    int i, n, m, c = 0, k, z;
    cout << "Enter the no. of elements of set a: ";
    cin >> n;
    cout << "enter the elements of set a: ";
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
        U[i] = A[i];
    }
    k = i;
    cout << "Enter the no. of elements of set b: ";
    cin >> m;
    cout << "enter the elements of set b: ";
    for (i = 0; i < m; i++)
    {
        cin >> B[i];
        U[k] = B[i];
        k++;
    }
    // interection logic
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i] == B[j])
            {
                I[c] = A[i];
                c++;
            }
        }
    }
    // union logic
    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (U[i] == U[j])
            {
                for (z = j; z < k - 1; z++)
                {
                    U[z] = U[z + 1];
                }
                k--;
                j--;
            }
        }
    }

    cout << "intersection: ";
    for (int i = 0; i < c; i++)
    {
        cout << I[i] << " ";
    }
    cout << "Union : ";
    for (int i = 0; i < k; i++)
    {
        cout << U[i];
    }

    // union logic
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i] > B[i])
            {
                U[i] = A[i];
            }
            else
            {
                U[i] = B[i];
            }
        }
    }
    // intersection logic
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i] < B[i])
            {
                I[i] = A[i];
            }
            else
            {
                I[i] = B[i];
            }
        }
    }

    // complement logic
    for (int i = 0; i < n; i++)
    {
        cA[i] = 1 - A[i];
    }
    for (int i = 0; i < m; i++)
    {
        cB[i] = 1 - B[i];
    }

    cout << "union: ";
    for (int i = 0; i < m; i++)
    {
        cout << U[i];
    }
    cout << "intersection: ";
    for (int i = 0; i < m; i++)
    {
        cout << I[i];
    }
    cout << "complement A: ";
    for (int i = 0; i < m; i++)
    {
        cout << cA[i];
    }
    cout << "Complement B: ";
    for (int i = 0; i < m; i++)
    {
        cout << cB[i];
    }

    cout << "A X B: ";
    cout << "{";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "(" << A[i] << " " << B[j] << ")";
        }
    }
    cout << "}" << endl;
    cout << "B X A: ";
    cout << "{";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "(" << B[i] << " " << A[j] << ")";
        }
    }
}
