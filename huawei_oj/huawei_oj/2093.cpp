// #include <iostream>
// #include <stdio.h>
// #include <ctype.h>
// using namespace std;
// 
// void countCharacter(char* str, int* characterNum)
// {
//     for (int i = 0; str[i] != 0; ++i)
//     {
//         if (isalpha(str[i]))
//             characterNum[0]++;
//         else if (str[i] == ' ')
//             characterNum[1]++;
//         else if(isdigit(str[i]))
//             characterNum[2]++;
//         else
//             characterNum[3]++;
//     }
// }
// 
// int main()
// {
//     char str[1024];
//     gets(str);
// 
//     int characterNum[4] = {0};
//     countCharacter(str, characterNum);
// 
//     for (int i = 0; i < 4; ++i)
//     {
//         cout << characterNum[i] << endl;
//     }
//     system("pause");
// }