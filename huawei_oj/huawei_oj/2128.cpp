#include <iostream>
#include <ctype.h>
using namespace std;

// void Encrypt(char aucPassword[], char aucResult[])
// {
//     int i;
//     for (i = 0; aucPassword[i] != 0; ++i)
//     {
//         if ('a' <= aucPassword[i] && aucPassword[i] < 'z')
//         {
//             aucResult[i] = aucPassword[i] + 'A' - 'a' + 1;
//         }
//         else if (('A' <= aucPassword[i] && aucPassword[i] < 'Z'))
//         {
//             aucResult[i] = aucPassword[i] + 'a' - 'A' + 1;
//         }
//         else if (aucPassword[i] == 'z')
//         {
//             aucResult[i] = 'A';
//         }
//         else if (aucPassword[i] == 'Z')
//         {
//             aucResult[i] = 'a';
//         }
//         else if (0 <= (aucPassword[i] - '0') && (aucPassword[i] - '0') < 9)
//         {
//             aucResult[i] = aucPassword[i] + 1;
//         }
//         else if (aucPassword[i] == (9 + '0'))
//         {
//             aucResult[i] = '0';
//         }
//         else
//         {
//             aucResult[i] = aucPassword[i];
//         }
//     }   
//     aucResult[i] = 0;
// }


// void unEncrypt(char aucPassword[], char aucResult[])
// {
//     int i;
//     for (i = 0; aucPassword[i] != 0; ++i)
//     {
//         if ('a' < aucPassword[i] && aucPassword[i] <= 'z')
//         {
//             aucResult[i] = aucPassword[i] + 'A' - 'a' - 1;
//         }
//         else if (('A' < aucPassword[i] && aucPassword[i] <= 'Z'))
//         {
//             aucResult[i] = aucPassword[i] + 'a' - 'A' - 1;
//         }
//         else if (aucPassword[i] == 'A')
//         {
//             aucResult[i] = 'z';
//         }
//         else if (aucPassword[i] == 'a')
//         {
//             aucResult[i] = 'Z';
//         }
//         else if (0 < (aucPassword[i] - '0') && (aucPassword[i] - '0') <= 9)
//         {
//             aucResult[i] = aucPassword[i] - 1;
//         }
//         else if (aucPassword[i] == (0 + '0'))
//         {
//             aucResult[i] = '9';
//         }
//         else
//         {
//             aucResult[i] = aucPassword[i];
//         }
//     }   
//     aucResult[i] = 0;
// }

//  循环队列的扩展
//  一般地， top = (top + 1) % len
//  假设区域为[begin, end], 则len = end - begin + 1;
//  则top = (top + 1 - begin) % len + begin;
//  为了保险，防止负数求模
//  top = (top + 1 - begin + len) % len + begin;
//  当top = end时，top的下一位置为begin

//  ctype
//  isalnum = isalpha + isdigit
//  isalpha = islower + isupper

void Encrypt(char aucPassword[], char aucResult[])
{
    int i = 0;
    for (;aucPassword[i] != 0; ++i)
    {
        if (isupper(aucPassword[i]))
        {
            aucResult[i] = (aucPassword[i] + ('a' - 'A') + 1 - 'a' + 26) % 26 + 'a';
        }
        else if (islower(aucPassword[i]))
        {
            aucResult[i] = (aucPassword[i] + ('A' - 'a') + 1 - 'A' + 26) % 26 + 'A';
        }
        else if (isdigit(aucPassword[i]))
        {
            aucResult[i] = (aucPassword[i] + 1 - '0' + 10) % 10 + '0';
        }
        else
        {
            aucResult[i] = aucPassword[i];
        }
    }
    aucResult[i] = aucPassword[i];
}

void unEncrypt(char aucPassword[], char aucResult[])
{
    int i = 0;
    for (; aucPassword[i] != 0; ++i)
    {
        if (isupper(aucPassword[i]))
        {
            aucResult[i] = (aucPassword[i] + ('a' - 'A') - 1 - 'a' + 26) % 26 + 'a';
        }
        else if (islower(aucPassword[i]))
        {
            aucResult[i] = (aucPassword[i] + ('A' - 'a') - 1 - 'A' + 26) % 26 + 'A';
        }
        else if (isdigit(aucPassword[i]))
        {
            aucResult[i] = (aucPassword[i] - 1 - '0' + 10) % 10 + '0';
        }
        else
        {
            aucResult[i] = aucPassword[i];
        }
    }
    aucResult[i] = 0;
}

//
// int main()
// {
//     const int MAXSIZE = 100;
// 
//     char aucPassword[MAXSIZE], aucResult[MAXSIZE];
//     gets(aucPassword);
//     Encrypt(aucPassword, aucResult);
// 
//     char result[MAXSIZE],password[MAXSIZE];
//     gets(result);
//     unEncrypt(result, password);
// 
//     //////////////////////////////////////////////////////////////////////
// //     puts(aucResult);
// //     printf("\n");
// //     
// //     puts(password);
// //     printf("\n");
//     cout << aucResult << endl;
//     cout << password << endl;
// 
// //    system("pause");
//     return 0;
// }