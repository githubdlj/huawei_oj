// #include <iostream>
// using namespace std;
// 
// void GetMinK(int* inputArr, int num, int k)
// {
//     for (int i = 0; i < k; ++i)
//     {
//         for (int j = num - 1; j > i; --j)
//         {
//             if (inputArr[j] < inputArr[j - 1])
//             {
//                 int temp = inputArr[j];
//                 inputArr[j] = inputArr[j - 1];
//                 inputArr[j - 1] = temp;
//             }
//         }
//     }
// }
// 
// int main()
// {
// 
//     int num = 0;
//     cin >> num;
// 
//     int k = 0;
//     cin >> k;
// 
//     int inputArr[1024];
//     for (int i = 0; i < num; ++i)
//     {
//         cin >> inputArr[i];
//     }
// 
//     GetMinK(inputArr, num, k);
// 
//     for (int i = 0; i < k - 1; ++i)
//     {
//         cout << inputArr[i] << ' ';
//     }
//     cout << inputArr[k - 1] << endl;
// 
//     system("pause");
//     return 0;
// }