/*SORU 12) Bir integer dizisinin s�ral� bir dizi olup olmad���n� kontrol eden; s�ral� ise ekrana
�Bu s�ral� bir dizidir�, de�ilse �Bu s�ral� bir dizi de�ildir� yazd�ran bir program yaz�n�z.
(Dizi k���kten b�y��e veya b�y�kten k����e s�ral� olabilir, iki durumda da ekrana s�ral�
yazd�r�lmal�d�r.)*/
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

