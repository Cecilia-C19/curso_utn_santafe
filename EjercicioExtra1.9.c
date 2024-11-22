#include <stdio.h>
#include <stdlib.h>
int main() {
    float radio;
    const float pi = 3.1415;
    scanf("%f", &radio);
    printf("Diam: %f \nCircuf: %f \nArea: %f \n", radio*2, pi*radio*2, pi*(radio*radio));
    system("pause");
    return 0;
}
