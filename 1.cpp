#include <stdio.h>
#include <string.h>

int coutTheLastWordsLen(char *str)
{	
	//	��λ�����һ�����ʵ�ĩβ���������һ�����ʺ���Ŀո�
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
	gets(str);	//	�ַ������������
	//puts(str);
	
	printf("%d\n", coutTheLastWordsLen(str));
	return 0;	
}