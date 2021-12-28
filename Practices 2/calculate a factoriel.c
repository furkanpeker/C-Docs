#include <stdio.h>

int calculatefactoriel(int count)
{
	int result=1;
	
	if(count>1)
	{
		result= count * calculatefactoriel(count-1);
	}
	return result;
}
int main()
{
	int count,result;
	
	printf("enter a number for factoriel process:");
	scanf("%d",&count);
	
	result= calculatefactoriel(count);
	
	printf("the result is %d.",result);

}

