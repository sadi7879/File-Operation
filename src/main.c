#include <stdio.h>
#include <stdlib.h>
int main ()
{
	char ch, file_name[25];
	FILE *fp;
	
	printf ("Enter the file name you need:\t");
	gets (file_name);
	
fp = fopen (file_name,"r");
{
	if(fp == NULL)

perror ("error while opeaning the file.\n");
	
exit (EXIT_FAILURE);
	}

	printf ("The contents of %s file are :\n",file_name);
	
	while( (ch = fgetc(fp) ) != EOF)
	
printf ("%c",ch);
	fclose(fp);
	
return 0;
	
	}
	
	
	
	
	
	