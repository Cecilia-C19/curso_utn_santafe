/*Caso 1 Archivos*/

#include <stdio.h>
 
int main ( int argc, char **argv )
{
 	FILE *fp;
 	
 	char buffer[100];
 	
 	fp = fopen ( "fichero.txt", "r+" );
 	
 	fscanf(fp, "%s" ,buffer);
 	printf("%s",buffer);
 	
 	fclose ( fp );
 	
 	return 0;
}
