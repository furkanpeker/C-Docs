//SORU 8) Kullan�c�dan bir say� girmesini isteyen ve kullan�c�n�n girdi�i say�y�, her sat�r�nda
//birer integer say� bulunan bir txt dosyas�nda arayan e�er varsa ka��nc� sat�rda oldu�unu,
//yoksa aranan say�n�n dosyada bulunmad���n� ekrana yazd�ran program� yaz�n�z.
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
