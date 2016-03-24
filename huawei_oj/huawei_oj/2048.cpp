// #include <iostream>
// #include <stdio.h>
// using namespace std;
// 
// void findChar(char str[])
// {
//     int hash[128] = {0};  //  记录各个字符的数量
//     for (int i = 0; str[i] != 0; ++i)
//     {
//         hash[str[i]]++;
//     }
// 
//     int i = 0;
//     for (; i < 128; ++i)
//     {
//         if (hash[i] == 1)
//         {
//             printf("%c\n", i);
//             break;
//         }
//     }
// 
//     if (i == 128)
//         printf(".\n");
// }
// 
// int main()
// {
//     char str[1024];
//     gets(str);
// 
//     findChar(str);
// 
//     system("pause");
//     return 0;
// }