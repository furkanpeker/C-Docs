//SORU 3) Her sat�r�nda aralar�nda bir bo�luk olan iki integer say� bulunan bir txt dosyas�ndan
//okudu�u de�erleri diziye aktaran program� yaz�n�z.
#include <stdio.h>

int main()
{
	FILE *fp;
	int array[10];
	int n,n2;
	
	if((fp=fopen("array.txt","r"))!=NULL)
	{
		while(!feof(fp))
		{
			fscanf(fp,"%d %d",&n,&n2);
			printf("%d %d\n",n,n2);
		}
		
		
		
	}
	else 
	{
		printf("the file could not find!!");
	}
	
	fclose(fp);
}
