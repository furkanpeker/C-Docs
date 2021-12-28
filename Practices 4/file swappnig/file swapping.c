//SORU 7) Ýki txt dosyasýnýn içindeki string deðerlerini birbiriyle deðiþtiren programý yazýnýz.
#include <stdio.h>
#include <conio.h>
int main()
{
	FILE *fp1, *fp2;
	int f1[500], f2[500];
	
	fp1=fopen("file1.txt","r");
	fp2=fopen("file2.txt","w");
	
	while(!feof(fp1))
	{
		fgets(f1,500,fp1);
		fprintf(fp2,"%s",f1);
	}
	fclose(fp1);
	fclose(fp2);

	fp1=fopen("file1.txt","w");
	fp2=fopen("file2.txt","r");
	
	while(!feof(fp2))
	{
		fgets(f2,500,fp2);
		fprintf(fp1,"%s",f2);
	}
	
	fclose(fp2);
	fclose(fp1);
	
}
