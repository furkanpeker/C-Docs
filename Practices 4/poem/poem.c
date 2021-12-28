#include <stdio.h>

int main()
{
	FILE *file;
	char ch[100];
	
	
	if((file = fopen("poem.txt","r")) != NULL)
	{
		while(!feof(file))
		{
			fgets(ch,100,file);
			printf("%s",ch);
		} 
	}
	else
	{
		printf("The file has not found..");
	}
	
	fclose(file);
}

//remember! fgets function doesn't read element by element, it reads row by row.
