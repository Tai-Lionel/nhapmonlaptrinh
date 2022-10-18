#include <stdio.h>
int main() 
{
	int a, b;
	scanf("%d %d", &a, &b);
	// neu a chia het cho b in ra b la uoc cua a
	if (a%b==0) {
		printf("b la uoc cua a");
	}
	// neu khong thi in ra b khong la uoc cua a
	else {
		printf("b khong phai la uoc cua a");
	}
}
