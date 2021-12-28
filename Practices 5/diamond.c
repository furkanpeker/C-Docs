#include <stdio.h>

int main()
{
	int satir,sutun;
	
	for (satir=3;satir>=1;satir--)
	{
		for(sutun=1;sutun<=satir;sutun++)
		{
			printf(" ");
		}
		
		for(sutun=1;sutun<=10-(satir*2-1);sutun++)
		{
			printf("*");
		}
		
		for(sutun=1;sutun<=satir;sutun++)
		{
			printf(" ");
		}
		printf("\n");
	}


		for (satir=1;satir<=5;satir++)
	{
		for(sutun=1;sutun<=satir;sutun++)
		{
			printf(" ");
		}
		
		for(sutun=1;sutun<=10-(satir*2-1);sutun++)
		{
			printf("*");
		}
		
		for(sutun=1;sutun<=satir;sutun++)
		{
			printf(" ");
		}
		printf("\n");
	}















}

