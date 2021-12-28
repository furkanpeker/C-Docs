#include <stdio.h>


int main()
{
	FILE *file;
	char word[100];
	
	if((file = fopen("reading.txt","r")) != NULL)
	{
		while(!feof(file))
		{
			fgets(word,100,file);
			printf("%s ",word);
		}
	}
	else
	{
		printf("The file has not found!!");
	}
	
	fclose(file);
	
}
