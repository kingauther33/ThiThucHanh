#include <stdio.h>
#include <malloc.h>
#include <string.h>

void lowerCase(char str1[]);

int main()
{
	char str[100];
	printf("Enter string: ");
	scanf("%[^\n]", str);
	printf("The String you just entered is: %s\n", str);
	lowerCase(str);
}

void lowerCase(char str1[])
{
	int i;
	for (i=0; i<strlen(str1); i++)
	{
		if ((str1[i]>= 65) && (str1[i] <= 90))
		{
			str1[i] += 32;
		}
	}
	printf("The lowered string is: %s", str1);
}
