/*SORU 10) Bir diziyi parametre olarak alan ve bu dizinin elemanlar�n� pointer kullanarak terse
�eviren fonksiyonu yaz�n�z. (Bu fonksiyonda herhangi bir return olmamal�d�r, terse �evirme
i�lemi orijinal dizi �zerinde yap�lmal�d�r.)*/

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


