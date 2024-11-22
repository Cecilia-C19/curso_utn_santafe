#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]) {
 void salir();
 int op=0,n=1,x;
 int cliente[n],dniaux=0;
 float total[n],mayor=0,totalaux=0;
 printf("ingresar opcion de menu");
 printf("\n1-Ingresar clientes ");
 printf("\n2-Resumen de cuenta mayor");
 printf("\n3-Modificar un total. "); 
 printf("\n4-Salir.\n");
 scanf("%d",&op);
 
 
 
 while (op!=4){
 switch (op)
 {
 case 1:
 for (x=0;x<n;x++)
 {printf("\n ingresar dni de cliente %d :",x+1);
 scanf("%d",&cliente[x]);
 printf("ingresar cuenta total de cliente %d : ",x+1);
 scanf("%f",&total[x]);
 if(mayor<total[x]){
 mayor=total[x];
 }
 }
 
 break;
 case 2:
 for (x=0;x<n;x++){
 if (mayor=total[x]){
 printf("\nel la cuenta mayor es de %d con un valor de %f ",cliente[x],total[x]);
 }
 }
 break;
 case 3:
 printf("ingresar dni para modificar la cuenta");
scanf("%d",&dniaux);
 for (x=0;x<n;x++){
 if(dniaux==cliente[x]){
 printf("ingresar una cuenta total nueva");
scanf("%f",&totalaux);
 total[x]=totalaux;
 }
 }
 break;
 }
 if(op<=0 || op>=5){ 
 printf("ingresar opcion incorrecta volver a ingresar");
 }
 printf("ingresar la oppcion de menu");
 printf("\n1-Ingresar clientes ");
 printf("\n2-Resumen de cuenta mayor");
 printf("\n3-Modificar un total. "); 
 printf("\n4-Salir.\n");
 scanf("%d",&op);
 } 
 salir();
 
 return 0;
}
 void salir(){
 printf("\n Gracias por usar el programa");
 system("pause");
 }
 