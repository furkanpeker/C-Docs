//SORU 4) Her sat�r�nda bir integer say� bulunan bir txt dosyas�ndan okudu�u de�erlerin
//maksimum'unu bulan ve bu de�eri ba�ka bir dosyaya yazan program� yaz�n�z.
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
