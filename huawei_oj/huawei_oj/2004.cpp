// #include <iostream>
// #include <algorithm>
// #include <set>
// using namespace std;
// 
// // void combineBySort(int* inputArr1, int num1, int* inputArr2, int num2, int* outputArr, int& num)
// // {
// //     int k = 0;
// //     for (int i = 0; i < num1; ++i)
// //     {
// //         outputArr[k++] = inputArr1[i];
// //     }
// //     for (int i = 0; i < num2; ++i)
// //     {
// //         outputArr[k++] = inputArr2[i];
// //     }
// // 
// //     sort(outputArr, outputArr + k);
// //     int* pos = unique(outputArr, outputArr + k);
// //     k = pos - outputArr;
// //     num = k;
// // }
// // 
// // int main()
// // {
// //     int num1;
// //     cin >> num1;
// // 
// //     int inputArr1[1024];
// //     for (int i = 0; i < num1; ++i)
// //     {
// //         cin >> inputArr1[i];
// //     }
// // 
// //     int num2;
// //     cin >> num2;
// // 
// //     int inputArr2[1024];
// //     for (int i = 0; i < num2; ++i)
// //     {
// //         cin >> inputArr2[i];
// //     }
// // 
// //     int outputArr[1024];
// //     int num;
// //     combineBySort(inputArr1, num1, inputArr2, num2, outputArr, num);
// // 
// //     for (int i = 0; i < num; ++i)
// //     {
// //         cout << outputArr[i];
// //     }
// //     system("pause");
// //     return 0;
// // }
// 
// //////////////////////////////////////////////////////////////////////
// void combineBySort_(int* inputArr1, int num1, int* inputArr2, int num2, set<int>& outputSet)
// {
//     for (int i = 0; i < num1; ++i)
//     {
//         outputSet.insert(inputArr1[i]);
//     }
// 
//     for (int i = 0; i < num2; ++i)
//     {
//         outputSet.insert(inputArr2[i]);     //  setµÄÓÃ·¨
//     }
// }
// 
// int main()
// {
//     int num1;
//     cin >> num1;
// 
//     int inputArr1[1024];
//     for (int i = 0; i < num1; ++i)
//     {
//         cin >> inputArr1[i];
//     }
// 
//     int num2;
//     cin >> num2;
// 
//     int inputArr2[1024];
//     for (int i = 0; i < num2; ++i)
//     {
//         cin >> inputArr2[i];
//     }
// 
//     set<int> outputSet;
//     combineBySort_(inputArr1, num1, inputArr2, num2, outputSet);
// 
//     set<int>::iterator it = outputSet.begin();
//     set<int>::iterator end = outputSet.end();
// 
//     for (; it != end; ++it)
//     {
//         cout <<*it;
//     }
//     cout << endl;
// 
//     system("pause");
//     return 0;
// }
