#include <stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	int s=0;
	int i;
	for (i = 1; i <= n; i++) {
		s = s + i;
	}
	printf("%f", s*1.0/n);
}
