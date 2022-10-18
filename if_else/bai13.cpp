#include <stdio.h>
int main()
{
	float score;
	scanf("%f", &score);
	if (score>=8 && score<=10)
	{
		printf("A");
	}
	else if (score>=7 && score<=8.4)
	{
		printf("B");
	}
	else if (score>=5.5 && score<=6.9)
	{
		printf("C");
	}
	else if (score>=4.0 && score <5.4)
	{
		printf("D");
	}
	else if (score<=4){
		printf("F");
	}
}
