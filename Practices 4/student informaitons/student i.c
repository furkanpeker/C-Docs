#include <stdio.h>

int main()
{
	FILE *file;
	int num[20], marks[20];
	int i=0;
	char name[20][10];
	file = fopen("student_informations.txt","r");
	if(file != NULL)
	{
		while(!feof(file))
		{
			fscanf(file,"%d %s %d",&num[i],&name[i],&marks[i]);
			printf("%d\t%s\t%d\n",num[i], name[i], marks[i]);
			i++;
		}
	}
	else
	{
		printf("the file hasn't found..");
	}		
	
	fclose(file);	
		
		
}
//unutma! char dizilerinde mant�k karkaterlri bir dizgi yani string halinde okumakt�r. 
//Ama int dizilerinde her yaz�lan bir b�t�n olarak al�n�r yani siz ne kadar say� girerseniz girin say� girme i�lemi bittikden sonra tek bir say� gibi okunur.
