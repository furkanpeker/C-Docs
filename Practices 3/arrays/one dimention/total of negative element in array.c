//SORU 5) Pointer kullanarak bir dizinin negatif elemanlarýnýn toplamýný bulan ve ekrana
//yazdýran programý yazýnýz.
#include <stdio.h>
#include <conio.h>

int main()
{
	int array[5], total=0, *p, i;
	
	p=array;
	
	for(i=0; i<5; i++)
	{
		printf("enter the %d.element: ",i+1);
		scanf("%d",p+i);
	}
	
	for(i=0; i<5; i++)
	{
		if(*(p+i)<0)
		{
			total = total + *(p+i);
		}
	}
	
	printf("Total of negative element of array is %d.",total);
	
	getch();
	
	return 0;
	
}
