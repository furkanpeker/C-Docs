#include <stdio.h>

int main()
{
	int isatir,isutun;
	
	for(isatir=1;isatir<=5;isatir++)
	{
 		for(isutun=1;isutun<=isatir;isutun++)
 		{
 			printf("*");
 		}
 		for(isutun=1;isutun<=(10-2*isatir);isutun++)
 		{
 			printf(" ");
 		}
 		for(isutun=1;isutun<=isatir;isutun++)
 		{
 			printf("*");
 		}
 		printf("\n");
	}
	
	for(isatir=4;isatir>=0;isatir--)
	{
		for(isutun=1;isutun<=;isutun++)
		{
			printf(" ");
		}
		for(isutun=1;isutun<=isatir;isutun++)
		{
			printf("*");
		}
		for(isutun=1;isutun<=isutun*(isatir-1);isutun++)
		{
			printf(" ");
		}
		printf("\n");
		
		
	}
} 
