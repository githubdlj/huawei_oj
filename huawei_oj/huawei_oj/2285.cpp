// #include <iostream>
// using namespace std;
// 
// int countSeven(int n)
// {
//     int numOfSeven = 0;
//     for (int i = 1; i <= n; ++i)
//     {   
//         if (i % 7 == 0)     //  Õû³ý7
//         {
//             numOfSeven++;
//             //cout << i << endl;
//         }
//         else                //  ·Ö½â
//         {
//             int num = i;
//             while (num)   
//             {
//                 int mod = num % 10;
//                 if (7 == mod)
//                 {
//                     numOfSeven++;
//                     //cout << i << endl;
//                     break;
//                 }
//                 num = num / 10;
//             }
//         }
//        
//     }
//     return numOfSeven;
// }
// 
// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     
// //     cout << countSeven(n);
// //     //system("pause");
// // }