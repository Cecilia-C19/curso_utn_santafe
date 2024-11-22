#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int i;
char alumnos[5][20] = {"","", "", "", ""};
float notas;
for (i=0;i<5;i++){
 printf("Ingrese el nombre del alumno/a: ");
 scanf("%s", &alumnos[i]);
 printf("Ingrese la nota del alumno/a:%s ", alumnos[i]);
 scanf("%f", &notas);
 if (notas < 4)
 {
 printf("El alumno/a %s, est%c aplazado/a. \n\n", alumnos[i], 160);
 /*si solo quiero mostrar un valor de la cadena uso: */
 printf("%c\n\n", alumnos[i][2]);
 }
}
system("pause");
return 0;
}