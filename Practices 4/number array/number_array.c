/*SORU 1) Bir integer dizi içindeki her elemaný ayrý satýrda bir txt dosyasýna yazan programý
yazýnýz.*/

#include <stdio.h>
#include <conio.h>
int main()
{
	FILE *file;
	int i, array[10];
	
	file = fopen("number_array.txt","w");
	
	printf("WARNING:You have to enter 10 number.\n");
	
	for(i=0; i<10; i++)
	{
		printf("enter the %d.number: ",i+1);
		scanf("%d",&array[i]);
	}
		for(i=0; i<10; i++)
	{
		fprintf(file,"%d.number is %d\n",i+1, array[i]);
	}
	
	fclose(file);
	
	getch();
	
}
