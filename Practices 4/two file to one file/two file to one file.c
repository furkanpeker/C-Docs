//SORU 6) Ýki txt dosyasýný tek bir txt dosyasý içinde birleþtiren programý yazýnýz.
#include <stdio.h>

int main(void)
{
	FILE *fp1, *fp2, *fp3;
	char f1[500], f2[500];

	
	
	fp1=fopen("file1.txt","r");
	fp3=fopen("file3.txt","w");
	
	if(fp1==NULL || fp3==NULL)
		printf("the file1 and the file3 couldn't be found.\n");
	
	
	while(!feof(fp1))
	{
		fgets(f1,500,fp1);
		fprintf(fp3,"%s",f1);
	}
	fprintf(fp3,"\n");
	fclose(fp3);
	fclose(fp1);
	
	fp2=fopen("file2.txt","r");
	fp3=fopen("file3.txt","a");
	
	if(fp2==NULL || fp3==NULL)
		printf("the file2 and the file3 couldn't be found.\n");
	
	while(!feof(fp2))
	{
		fgets(f2,500,fp2);
		fprintf(fp3,"%s",f2);
	}
	
	fclose(fp3);
	fclose(fp2);
	
	
	
}
