#include <stdio.h>
int main(){
  int i,j;
  int calif;
  int suma1=0, suma2=0;
  float promedio1, promedio2;
  for (i=1; i<=5; i++){
    printf("\nCalificaciones alumno %d\n", i);
    for (j=1; j<=3; j++ ){
        printf("\tIngresar nota %d: ",j);
        scanf("%d",&calif);
        suma1=suma1+calif;
    }
    promedio1 = suma1 / 3;
    printf("\tEl promedio es %.2f", promedio1);
    suma2=suma2+promedio1;
    suma1=0;
  }
  promedio2 = suma2 / 5;
  printf("\nEl promedio general es: %.2f",promedio2);
  system("pause");
}