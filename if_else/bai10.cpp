#include <stdio.h>
int main()
{
	// take user input
	int n;
	scanf("%d", &n);
	// calculate depends on that number
	if (n<=3)
	{
		printf("$%d", n*120000);
	}
	else if (n>=4 && n<=6)
	{
		printf("$%d", n*90000);
	}
	else if (n>=7 && n<=10)
	{
		printf("$%d", n*85000);
	}
	else if (n>=11)
	{
		printf("$%d", n*70000);
	}
}
