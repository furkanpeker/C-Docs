//SORU 3) Her satýrýnda aralarýnda bir boþluk olan iki integer sayý bulunan bir txt dosyasýndan
//okuduðu deðerleri diziye aktaran programý yazýnýz.
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
