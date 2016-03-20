#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void strOrder(string& str)
{
	sort(str.begin(), str.end());
}

int main()
{
	string str;
	cin >> str;
	//cout << str << endl;
	
	strOrder(str);
	cout << str << endl;
	
	return 0;
}