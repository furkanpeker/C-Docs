//SORU 5) Bir txt dosyas�n�n i�eri�ini ba�ka bir txt dosyas�na kopyalayan program� yaz�n�z.
#include <stdio.h>

int main()
{
	FILE *fp,*fp2;
	char ch[500];
	
	
	
	fp = fopen("copy1.txt","r");
	fp2 = fopen("copy2.txt","w");
	
	    while(!feof(fp))
		{
			fgets(ch,50,fp);
			fprintf(fp2,"%s",ch);
		}
	
	fclose(fp2);
	fclose(fp);
	

}
