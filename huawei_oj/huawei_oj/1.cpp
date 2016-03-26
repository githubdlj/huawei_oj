// #include <iostream>
// #include <stdio.h>
// using namespace std;
// 
// //  返回GC比例最大的下标
// int findGC(char* str)
// {
//     int maxSumOfGC = 0;
//     int index = 0;  
// 
//     int len = strlen(str);
//     int bound = len - 5;
//     for (int i = 0; i < bound; ++i)
//     {
//         int sumOfGC = 0;
//         for (int j = i; j < 5 + i; ++j)
//         {
//             if (str[j] == 'G' || str[j] == 'C')
//             {
//                 sumOfGC++;
//             }
//         }
//         //cout << sumOfGC << endl;
//         if (maxSumOfGC < sumOfGC)
//         {
//             maxSumOfGC = sumOfGC;
//             index = i;
//         }
//     }
// 
//     return index;
// }
// 
// int main()
// {
//     char str[1204];
//     cin >> str;
// 
//     int subLen;
//     cin >> subLen;
// 
//     int index = findGC(str);
//     for (int i = index; i < index + 5; ++i)
//     {
//         cout << str[i];
//     }
//     cout << endl;
// 
//     system("pause");
//     return 0;
// }