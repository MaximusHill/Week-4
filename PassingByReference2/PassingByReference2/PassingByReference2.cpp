#include<stdlib.h>
#include <stdio.h>
#include <iostream>

char* LowerToUpper(char*);
char* UpperToLower(char*);
int main()
{
	char string[20];

	printf("please input your string max of 20\n");
	scanf_s("%s", string, 20);
	LowerToUpper(string);
	printf("%s\n",string);
	UpperToLower(string);
	printf("%s\n", string);
}

char* LowerToUpper(char* str)
{
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return str;
}
char* UpperToLower(char* str)
{
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
	}
	return str;
}