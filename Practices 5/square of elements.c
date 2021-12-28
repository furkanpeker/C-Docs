//SORU 8) Pointer kullanarak bir dizinin elemanlarýnýn karelerinin toplamýný hesaplayan ve
//ekrana yazdýran programý yazýnýz.
#include <stdio.h>
#include <conio.h>
int square(int count)
{
	int result=0;
	
	result = count*count;
	
	return result;
}
int main()
{
	int array[5], *p, i;
	int result;
	p=array;


	for(i=0; i<5; i++)
	{
		printf("enter the %d.element: ",i+1);
		scanf("%d",p+i);
	}
	printf("\n");
	for(i=0; i<5; i++)
	{
		result = square(*(p+i));
		printf("the square of %d.element : %d\n",i+1, result);
	}
	
	
	getch();
	
	return 0;
	
}
