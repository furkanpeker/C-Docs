#include <stdio.h>

int main()
{
	int bosluk, i, j, a[10], temp[10];
	
	bosluk = 3;
	
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=bosluk; j++)
		{
			printf(" ");
		}
		for(j=0; j<4; j++)
		{
			printf("%d",a[i]);
			a[i]=temp[i];
			temp[i]+temp[i+1]
		}
	}
}
