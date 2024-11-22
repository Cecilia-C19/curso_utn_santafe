#include <stdio.h>
#include <string.h>

struct alumnos{
    char apellido[20];
    char nombre[20];
    int altura;
};

int main() {
    struct alumnos alu[400];
    int i, cant_alu, m_masalto, p_masalto;

    // carga de datos
    for (i=0; i<400; i++) {
        printf("\n\nAlumno Nro. %d   (ingrese * en Apellido para terminar la carga de alumnos)\nApellido: ", i+1);
        scanf("%s",alu[i].apellido);
        if (strcmp(alu[i].apellido,"*") == 0) break;
        printf("Nombre: ");
        scanf("%s",alu[i].nombre);
        printf("Altura (cm): ");
        scanf("%d",&alu[i].altura);
        fflush(stdin);
    }
    cant_alu = i; //guardo la cantidad de alumnos cargados

    // determino la posicion en el arreglo de estructuras que contiene el alumno mas alto
    m_masalto = alu[0].altura;
    p_masalto = 0;
    for (i=1 ; i<cant_alu ; i++) {
        if (alu[i].altura > m_masalto) {
            m_masalto = alu[i].altura;
            p_masalto = i;
        }
    }

    // muestro los datos del alumno mas alto
    printf("\n\nApellido: %s, Nombre: %s, Altura: %d.",alu[p_masalto].apellido, alu[p_masalto].nombre, alu[p_masalto].altura);
    system("pause"); // lo agregamos para que demore en cerrar la pantalla

    return 0;
}