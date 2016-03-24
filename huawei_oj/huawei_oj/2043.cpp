// #include <iostream>
// #include <stdio.h>
// using namespace std;
// 
// bool isPrimer(int num)  
// {   
//    // int bound = max(num / 2, 2);   //   bound不能小于2
//     int bound = (num / 2) > 2 ? (num / 2) : 2;
//     for (int i = 2; i <= bound; ++i)
//     {
//         if (num % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;    //  1是质数
// }
// 
// void findPairPrimer(int num)
// {
//     int bound = num / 2;
//     
//     for (int i = bound; i >= 1; --i)
//     {
//         if (isPrimer(i) && isPrimer(num - i))
//         {
//             cout << i << ' ' << num - i << endl;
//             break;
//         }
//     }
// }
// 
// int main()
// {
//    
//     int num;
//     cin >> num;
//         
//     findPairPrimer(num);
//     
//     system("pause");
//     return 0;
// }