#include <stdio.h>
int main()
{
	int n;
	printf("How many DVD disks do you want to buy?");
	scanf("%d", &n);
	if (n>10) 
	{
		float result = n*5000-n*5000*0.1;
		printf("%d", (int)result);
	}
	else {
		printf("%d", n*5000);
	}
}
