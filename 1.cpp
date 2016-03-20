#include <stdio.h>
#include <string.h>

int coutTheLastWordsLen(char *str)
{	
	//	定位到最后一个单词的末尾（消除最后一个单词后面的空格）
	int end = strlen(str) - 1;
	for (; end >= 0; --end)
	{
		if (str[end] != ' ')
			break;	
	}
	
	int len = 0;
	for (int i = end; i >= 0; --i)
	{
		if (str[i] == ' ')
		{
			return len;	
		}
		++len;
	}
	return len;	
}

int main()
{
	char str[128];
	gets(str);	//	字符串的输入输出
	//puts(str);
	
	printf("%d\n", coutTheLastWordsLen(str));
	return 0;	
}