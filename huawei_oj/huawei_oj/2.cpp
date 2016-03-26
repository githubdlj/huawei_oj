#include <iostream>
#include <stdio.h>
using namespace std;

void matrixMul(int *a, int *b, int *c, int x, int y, int z)
{
    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < z; ++j)
        {
            int temp = 0;
            for (int k = 0; k < y; ++k)
            {
                temp += a[i * y + k] * b[k * z + j];
            }
            c[i * z + j] = temp;
        }
    }
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    int a[100], b[100], c[100];

    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < y; ++j)
        {
            cin >> a[i * y + j];
        }
    }

    for (int i = 0; i < y; ++i)
    {
        for (int j = 0; j < z; ++j)
        {
            cin >> b[i * z + j];
        }
    }

    matrixMul(a, b, c, x, y, z);

    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < z; ++j)
        {
            cout << c[i * z + j] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}