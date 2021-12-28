/*SORU 12) Bir integer dizisinin sýralý bir dizi olup olmadýðýný kontrol eden; sýralý ise ekrana
“Bu sýralý bir dizidir”, deðilse “Bu sýralý bir dizi deðildir” yazdýran bir program yazýnýz.
(Dizi küçükten büyüðe veya büyükten küçüðe sýralý olabilir, iki durumda da ekrana sýralý
yazdýrýlmalýdýr.)*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int array[5];
	int result=0, result2=0, j, i; 

	for(i=0; i<5; i++)
	{
		printf("enter the %d.value: ",i+1);
		scanf("%d",&array[i]);
	}
	
	for(i=4; i>0; i--)
	{
		if(array[i] > array[i-1])
		{
			result = i;
		}
		else
		{
			break;
		}
	}
	
	for(j=4; j>0; j--)
	{
		if(array[j] < array[j-1])
		{
			result2 = j;
		}
		else
		{
			break;
		}
	}
	
	if(result == 1 || result2 == 1)
	{
		printf("This array is increasing array.");
	}
	else
	{
		printf("This array is not increasing array.");
	}
}

