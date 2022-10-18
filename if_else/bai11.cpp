#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	if (x<100)
	{
		printf("950");
	}
	else if (x>=100 && x<150)
	{
		printf("1250");
	}
	else if (x>=150 && x<200)
	{
		printf("1350");
	}
	else if (x>=200)
	{
		printf("1500");
	}
}

