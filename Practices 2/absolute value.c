/*SORU 11) Negatif ve pozitif elemanlardan olu�an bir integer dizisinin b�t�n elemanlar�n�
mutlak de�erleriyle de�i�tiren bir program yaz�n�z.*/
#include <stdio.h>
#include <conio.h>

int absolute_v(int count)
{
	if(count<0)
	{
		return -count;
	}
	else
	{
		return count;
	}
}

int main()
{
	int array[5];
	int i, result=0;
	
	for(i=0; i<5; i++)
	{
		printf("enter %d.count: ",i+1);
		scanf("%d",&array[i]);
	}
	
	for(i=0; i<5; i++)
	{
		result = absolute_v(array[i]);
		printf("The absolute value of %d.count is %d.\n",i+1, result);
	}
	
}
