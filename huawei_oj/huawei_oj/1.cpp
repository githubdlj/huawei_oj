//  int atoi(const char* str)
//  char* itoa(int value, char* result, int radix)
//  sprintf(char* result, const char* format, [argument]), printf(const char* format, [argument]);

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int findNumOfOne(int num)
{
    char str[1024];
    itoa(num, str, 2);

    int count = 0;
    for (int i = 0; str[i] != 0; ++i)
    {
        if (str[i] == '1')
        {
            ++count;
        }
    }

    return count;
}

int main()
{
    int num;
    cin >> num;
    cout << findNumOfOne(num) << endl;; 
    system("pause");
    return 0;
}