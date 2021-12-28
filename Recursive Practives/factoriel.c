#include <stdio.h>
//factoriel of a count.
int factoriel(int count)
{
	if(count != 1)
	{
		return count * factoriel(count-1);
	}
}

int main()
{
	int count, f;
	
	printf("enter a count to calculate its factoriel:");
	scanf("%d",&count);
	
	f = factoriel(count);
	printf(" factoriel of %d is %d",count,f);
	
}
