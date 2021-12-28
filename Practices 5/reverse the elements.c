/*SORU 10) Bir diziyi parametre olarak alan ve bu dizinin elemanlarýný pointer kullanarak terse
çeviren fonksiyonu yazýnýz. (Bu fonksiyonda herhangi bir return olmamalýdýr, terse çevirme
iþlemi orijinal dizi üzerinde yapýlmalýdýr.)*/

#include <stdio.h>

void reverse(int *array, int size)
{
	int i, backup;
	for(i=0; i<(size/2); i++)
	{
		backup=*(array+i);
		*(array+i) = *(array+((size-1)-i));	
		*(array+((size-1)-i))=backup;	  
	}
}

int main()
{
	int array[50], i, n;

	printf("enter the number of array: ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("enter the %d.element: ",i+1);
		scanf("%d",array+i);
	}
	
	printf("\nthe reverse of array is;\n\n");
	reverse(array,n);
	for(i=0; i<n; i++)
	{
		printf("%d",*(array+i));
	}
	
	
}


