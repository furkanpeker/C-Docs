//SORU 17) Bir integer N deðerini kullanýcýdan girmesini isteyen ve bu sayýnýn 2'nin üssü olup olmadýðýný (1, 2, 4, 8, 16, 32, ... , 1024, ...) kontrol eden; 
//2'nin üssü ise kaçýncý üssü olduðunu, deðilse -1 ekrana yazdýran programý yazýnýz
#include <stdio.h>

int main()
{
	int N, i;
	
	printf("enter a count:");   scanf("%d",&N);
	
	if(N%2==0 && ?)
	{
		for(i=1; i<=N; i++)
		{
			N=N/2;
		}
		printf("this number is %d.power of 2.",i-1);
	}
	else
	{
		printf("-1");
	}
}
