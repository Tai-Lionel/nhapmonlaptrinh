#include <stdio.h>
int main()
{
	int cp, sp, pro=0, loss=0;
	double lossper, proper;
	scanf("%d %d", &cp, &sp);
	if (cp>sp)
	{
		loss=cp-sp;
	}
	else if (cp<sp)
	{
		pro=sp-cp;
	}
	lossper = ((double)loss/cp)*100;
	proper = ((double)pro/cp)*100;
	if (cp>sp)
	{
		printf("%d percent", (int)lossper);
	}
	else if (cp<sp)
	{
		printf("%d percent", (int)proper);
	}
}
