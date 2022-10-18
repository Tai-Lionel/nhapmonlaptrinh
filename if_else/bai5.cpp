#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c;
	printf("a b c: ");
	scanf("%d %d %d", &a, &b, &c);
	double delta = b*b-4*a*c;
	if (delta > 0)
	{
		printf("Phuong trinh co hai nghiem phan biet x1, x2 voi\n");
		double x1 = (-b + sqrt(delta))/(2*a);
		double x2 = (-b - sqrt(delta))/(2*a);
		printf("x1 = %lf\n", x1);
		printf("x2 = %lf\n", x2);
	}
	else if (delta == 0) 
	{
		printf("Phuong trinh co nghiem kep x0 voi\n");
		double x0 = -b/(2*a);
		printf("x0 = %lf\n", x0);
	}
	else 
	{
		printf("Phuong trinh vo nghiem\n");
	}
}
