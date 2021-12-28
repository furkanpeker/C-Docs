//SORU 4) Her satýrýnda bir integer sayý bulunan bir txt dosyasýndan okuduðu deðerlerin
//maksimum'unu bulan ve bu deðeri baþka bir dosyaya yazan programý yazýnýz.
#include <stdio.h>

int main()
{
	FILE *fp,*fp2;
	int n;
	int max=0;
	
	if((fp = fopen("max.txt","r"))!=NULL)
	{
		while(!feof(fp))
		{
			fscanf(fp,"%d",&n);
			if(max < n)
				 max=n;
		}
	}
	else
	{
		printf("the file couldn't find!");
	}
	
	fclose(fp);
	
	if((fp2=fopen("max2.txt","w"))!= NULL)
	{
		fprintf(fp2,"the max value is %d",max);
	}
	fclose(fp2);
}
