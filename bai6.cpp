#include <stdio.h>
int main(void) {
	if (n<0) {
		printf("Nhap lai\n");
	}
	else {
		double s = 0.0;
		for (int i = 1; i <= n; i++) {
		if (i%2!=0) {
			s = s + (double)1/((2*i)*(2*i));
		}
		else {
			s = s - (double)1/((2*i)*(2*i));
		}
	}
	printf("%lf", s);
	}
}
