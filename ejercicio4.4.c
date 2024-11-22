

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){

    int n;
    int acumulador = 0;


    for(n=1; n<=10; n+=2){
        //*n = n + 1;*/
        
       acumulador += n;
       
       
    }
       
       printf("%f\n", acumulador);
      
    system("pause");
    return 0;
}
