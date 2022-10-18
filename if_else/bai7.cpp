#include <stdio.h>
#include <ctype.h>
int main() 
{
	char c;
	scanf("%c", &c);
	c = tolower(c);
	if (c=='a' || c=='e' || c == 'i' || c == 'u' || c=='o')
	{
		printf("The alphabet is a vowel");
	}
	else
	{
		printf("The alphabet is a consonant");
	}
}
