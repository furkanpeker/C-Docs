//SORU 8) Kullanýcýdan bir sayý girmesini isteyen ve kullanýcýnýn girdiði sayýyý, her satýrýnda
//birer integer sayý bulunan bir txt dosyasýnda arayan eðer varsa kaçýncý satýrda olduðunu,
//yoksa aranan sayýnýn dosyada bulunmadýðýný ekrana yazdýran programý yazýnýz.
#include <stdio.h>

int main()
{
	FILE *f;
	int array[5], n, i;
	
	f=fopen("array.txt","r");
	
	for(i=0; i<5; i++)
	{
		fscanf(f,"%d\n",&array[i]);
	}
	
	printf("enter a count: ");
	scanf("%d",&n);
	int varMi=0;
	for(i=0; i<5; i++)
	{
		if(n==array[i])
		{
			printf("The count is in %d.row.",i+1);
			varMi=1;
		}
	} 

	if(varMi==0)
		printf("The count is not in this array!");
	

	fclose(f);
}
