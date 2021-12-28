#include <stdio.h>

int main()
{
	int i,j,yildiz,bosluk,satir;
	
	printf("satir sayisi girin:");   scanf("%d",&satir);
	
	yildiz=1;
	bosluk=satir -1;
	
	for(i=0; i<satir; i++)
	{
		for(j=0; j<bosluk; j++)
		{
			printf(" ");
		}
		for(j=0; j<yildiz; j++)
		{
			printf("*");
		}
		printf("\n");
		yildiz=yildiz+2;
		bosluk--;
	}
	
	yildiz=2*satir-1;
	bosluk=1;
	
	for(i=0; i<satir; i++)
	{
		for(j=0; j<bosluk; j++)
		{
			printf(" ");
		}
		for(j=0; j<yildiz; j++)
		{
			printf("*");
		}
		printf("\n");
		yildiz=yildiz-2;
		bosluk++;
	}
}
