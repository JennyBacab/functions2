#include<stdio.h>
 
int main() {
    int num, min, max;
     
    printf("Ingrese un numero\n");
    scanf("%d", &num);
    printf("Ingrese los numeros que definen el rango\n");
    scanf("%d %d", &min, &max);
     
    if((num-min)*(num-max) <= 0){
        printf("Dentro del rango");
    } else {
     printf("Fuera del rango");
    }
 
    return 0;
}
