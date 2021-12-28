#include <stdio.h>

int main()
{
	int i,j,bosluk,yildiz,satir;
	
	printf("satir sayisi:\nlutfen cift sayi girin!");  scanf("%d",&satir);
	
	yildiz=1;
	bosluk=satir;
	
	for(i=1; i<=satir/2; i++)
	{
		bosluk= bosluk-2;
		for(j=1; j<=yildiz; j++)
		{
			printf("*");
		}
		for(j=1; j<=bosluk; j++)
		{
			printf(" ");
		}
		for(j=1; j<=yildiz; j++)
		{
			printf("*");
		}
		printf("\n");
		yildiz++;
	}
	
	yildiz = satir/2;
	bosluk=0;
	
	for(i=1; i<=satir/2; i++)
	{
		for(j=1; j<=yildiz; j++)
		{
			printf("*");
		}
		for(j=1; j<=bosluk; j++)
		{
			printf(" ");
		}
		for(j=1; j<=yildiz; j++)
		{
			printf("*");
		}
		printf("\n");
		yildiz--;
		bosluk=bosluk+2;
	}
}
/*
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *
*/
