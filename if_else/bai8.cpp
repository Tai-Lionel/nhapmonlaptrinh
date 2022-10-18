#include <stdio.h>
#include <math.h>
int main()
{
	// nhap vao 3 canh a, b, c
	int a, b,c;
	scanf("%d %d %d", &a, &b, &c);
	// neu a, b, c co the tao thanh mot tam giac thi lam tiep
	if (a+b>c && a+c>b && b+c>a)
	{
		// neu a, b, c la tam giac deu in ra
		if (a==b && b==c && c==a) 
		{
			printf("This is an equilateral Triangle");
		}
		// neu a, b, c la tam giac can thi in ra
		if (a==b || b==c || c==a) 
		{
			printf("This is an isosceles Triangle");
		}
		// neu a, b, c la tam giac vuong in ra
		if (a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b)
		{
			printf("This is a right Triangle");
		}
		// neu a, b ,c la tam giac thuong in ra
		else
		{
			printf("This is a scalene Triangle");
		}
	}	
	// khong thi in ra no khong phai la mot tam giac
	else 
	{
		printf("No Triangle can be created");
	}
}
