#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main()
{
	int i, num, sum = 0, du;
	printf("Enter number: ");
	scanf("%d", &num);
	while (num != 0)
	{
		du = num % 10;
		sum += du;
		num = num / 10;
	}
	printf("Total digits: %d", sum);
}
