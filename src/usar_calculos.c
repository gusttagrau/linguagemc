#include <stdio.h>
#include "../lib/calculos.h"

int main(){
    int numero[8] = {7,12,8,45,31,52,102,34};

    printf(" A soma dos numeros é %d\n",soma(numero,8));
    printf(" A medis dos numeros é %d\n",media(numero,8));
    printf("o numero pares do array sao\n");
    pares(numero,8);
    return 0;

    
}