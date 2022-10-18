#include <stdio.h>
int main() 
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	// find the biggest number in the three
	if (a>b && a>c)
	{
		printf("The 1st Number is the greatest among three");
	}
	else if (b>c && b>a) 
	{
		printf("The 2nd Number is the greatest among three");
	}
	else {
		printf("The 3rd Number is the greatest among three");
	}
}
