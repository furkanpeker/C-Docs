//SORU 4) Pointer kullanarak bir dizinin ortalamasýný hesaplayan ve ekrana yazdýran programý yazýnýz.
#include <stdio.h>
#include <conio.h>
int main()
{
	int ave=0, array[5], tot=0, i, *p;
	
	p=array;

	for(i=0; i<5; i++)
	{
		printf("enter the %d.element:",i+1);
		scanf("%d",p+i);
	}
	
	for(i=0; i<5; i++){
		tot = tot + *(p+i);
	}
	
	ave = tot/5;
	printf("the average of the array is %d.",ave);	
	
	
	
/*	
	int ave=0, array[5], tot=0, i;
	

	for(i=0; i<5; i++)
	{
		printf("enter the %d.element:",i+1);
		scanf("%d",&array[i]);
	}
	
	for(i=0; i<5; i++){
		tot = tot + array[i];
	}
	
	ave = tot/5;
	printf("the average of the array is %d.",ave);
	
	
	
	*/
	
	
	
	
	
	
	
	
	
	getch();
	
	return 0;
}

