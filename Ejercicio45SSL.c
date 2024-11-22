#include <stdio.h>
#include <stdlib.h>


main() {


char car;
int cont_a = 0, cont_e = 0, cont_i = 0, cont_o = 0, cont_u = 0;

for(int i = 0; i < 20; i++){
    car= getchar();
    switch(car){
        case 'a':
            cont_a++;
            break;
        case 'e':
            cont_e++;
            break;
        case 'i':
            cont_i++;
            break;
        case 'o':
            cont_o++;
            break;
        case 'u':
            cont_u++;
            break;
        default:
        break;

    }

}
printf("Se ingresaron: %d letras \"a\"\n", cont_a);
printf("Se ingresaron: %d letras \"e\"\n", cont_e);
printf("Se ingresaron: %d letras \"i\"\n", cont_i);
printf("Se ingresaron: %d letras \"o\"\n", cont_o);
printf("Se ingresaron: %d letras \"u\"\n", cont_u);



}
