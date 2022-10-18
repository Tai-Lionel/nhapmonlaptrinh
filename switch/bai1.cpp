#include <stdio.h>
int main()
{
	// take user input
	char c;
	scanf("%c", &c);
	switch(c)
	{
		case 'E':
			printf("Excellent");
			break;
		case 'v':
			printf("Very good");
			break;
		case 'G':
			printf("Good");
			break;
		case 'A':
			printf("Average");
			break;
		case 'F':
			printf("Fail");
			break;
	}
}
