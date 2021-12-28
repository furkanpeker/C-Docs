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
//unutma! char dizilerinde mantýk karkaterlri bir dizgi yani string halinde okumaktýr. 
//Ama int dizilerinde her yazýlan bir bütün olarak alýnýr yani siz ne kadar sayý girerseniz girin sayý girme iþlemi bittikden sonra tek bir sayý gibi okunur.
