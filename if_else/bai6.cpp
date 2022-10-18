#include <stdio.h>
int main()
{
	char c;
	scanf("%c", &c);
	if (c>=65 && c<=90)
	{
		printf("This is an uppercase character");
	}
	else if (c>=97 && c<=122)
	{
		printf("This is a lowercase character");
	}
	else if (c>=48 && c<=57)
	{
		printf("This is a number");
	}
	else 
	{
		printf("This is a special symbol");
	}
}
