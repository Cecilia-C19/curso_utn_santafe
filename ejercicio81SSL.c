#include <stdio.h>
#include <string>

struct alumnos{
    char nombre[20];
    char turno;
}

int main() {

    struct alumnos alum1, alum2;
    strcpy(alum1.nombre,"Juan Perez");
    alum1.turno='M';
    strcpy(alum2.nombre,"Ana Garcia");
    alum2.turno='T';

    if(alum1.turno==alum2.turno){
        printf("Los alumnos pertenecen al mismo turno");
    }
    else{
        printf("Los alumnos no pertenecen al mismo turno");
    }

   return 0; 
}