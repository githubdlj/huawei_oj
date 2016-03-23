// #include <iostream>
// using namespace std;
// 
// void GetSnakeMat(int num, int* pResult)
// {   
//     int rowFirstValue = 1;
//     for (int i = 0; i < num; ++i)
//     {
//         rowFirstValue = rowFirstValue + i;    //  每一行的第一个值
//         int rowValue = rowFirstValue;         //  每一行的值
// 
//         for (int j = 0; j < num - i; j++)
//         {
//             if (j > 0)
//                 rowValue = rowValue + j + 1 + i;
//             pResult[i * num + j] = rowValue;
//             //cout << rowValue << "\t";
//         }
//     }
// }
// 
// void PrintSnakeMat(int* pResult, int num)
// {
//     for (int i = 0; i < num; ++i)
//     {
//         int j = 0;
//         for (; j < num - i - 1; ++j)
//         {
//             cout << pResult[i * num + j] <<' ';
//         }
//         cout << pResult[i * num + j] << endl;
//     }
// }
// 
// int main()
// {
//     int num;
//     cin >> num;
//     
//     int result[1024];
//     GetSnakeMat(num, result);
//     PrintSnakeMat(result, num);
// 
//     system("pause");
//     return 0;
// }