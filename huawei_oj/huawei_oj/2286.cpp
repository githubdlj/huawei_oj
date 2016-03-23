// #include <iostream>
// #include <string>
// #include <vector>
// //#include <algorithm>
// 
// using namespace std;
// 
// //	bubble sort
// void sort(vector<int>& charNum, int n)
// {
// 	for (int i = 0; i < n - 1; ++i)
// 	{
// 		for (int j = 0; j < n - i - 1; ++j)
// 		{
// 			if (charNum[j] < charNum[j + 1])
// 			{
// 				int temp = charNum[j];
// 				charNum[j] = charNum[j + 1];
// 				charNum[j + 1] = temp;	
// 			}	
// 		}	
// 	}	
// }
// 
// void beautifulName(const vector<string>& nameVec, vector<int>& beautifulValueVec)
// {
// 	int vecSize = nameVec.size();
// 	for (int index = 0; index < vecSize; ++index)
// 	{
// 		//	统计每个字符的个数
// 		vector<int> charNum(26, 0);		
// 		int strLen = nameVec[index].length();
// 		for (int i = 0; i < strLen; ++i)
// 		{
// 			charNum[tolower(nameVec[index][i]) - 'a']++;	
// 		}
// 		
// 		//sort(charNum.begin(), charNum.end(), greater<int>());
// 		sort(charNum, 26);
// 		
// 		int beautifulNameVal = 0;
// 		int weight = 26;
// 		for (int i = 0; i < 26; ++i)
// 		{
// 			beautifulNameVal += weight * charNum[i];
// 			weight--;
// 		}
// 		beautifulValueVec.push_back(beautifulNameVal);
// 	}
// }
// 
// //void testSort()
// //{
// //	int a[5] = {1,2,3,4,5};
// //	int b[5] = {5,4,3,2,1};
// //	int c[5] = {5,3,2,4,1};
// //	sort(a,5);
// //	for (int i = 0; i < 5; ++i)
// //	{
// //		cout << a[i] << endl;	
// //	}	
// //}
// 
// //
// int main()
// {
// 	int nameNum;
// 	cin >> nameNum;
// 	
// 	vector<string> nameVec;
// 	nameVec.reserve(nameNum);
// 	
// 	for (int i = 0; i < nameNum; ++i)
// 	{
// 		string name;
// 		cin >> name;
// 		nameVec.push_back(name);
// 	}
// 	
// //	for (int i = 0; i < nameVec.size(); ++i)
// //	{
// //		cout << nameVec[i] << endl;	
// //	}
// 
// 	vector<int> beautifulNameVec;
// 	beautifulNameVec.reserve(nameNum);
// 	beautifulName(nameVec, beautifulNameVec);
// 	
// 	for (int i = 0; i < nameNum; ++i)
// 	{
// 		cout << beautifulNameVec[i] << endl;	
// 	}
// 	return 0;	
// }