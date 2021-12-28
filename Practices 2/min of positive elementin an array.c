/*SORU 6) Pointer kullanarak bir dizinin pozitif elemanlarýnýn en küçüðünü bulan ve ekrana
yazdýran programý yazýnýz.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int array[5], *p, i;
	
	p=array;

	int min=*(p+0);

	for(i=0; i<5; i++)
	{
		printf("enter the %d.element: ",i+1);
		scanf("%d",p+i);
	}
	
	for(i=0; i<5; i++)
	{
		if(*(p+i)>0)
		{
			if(min > *(p+i))
			{
				min = *(p+i); 
			}
		}
	}
	
	printf("Minimum of positive element of array is %d.",min);
	
	getch();
	
	return 0;
	
}
