#include <stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	if (n==0) {
		printf("0");
	}
	else if (n<0) {
		printf("Nhap lai\n");
	}
	else {
		int tich = 1;
		for (int i = 1; i <= n; i++) {
			if (i%2!=0) {
				tich=tich*i;
			}
		}
		printf("%d", tich);
	}
}
