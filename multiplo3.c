 # include <stdio.h>

int main(){
    //declaração de varialvel de contagem de zero (0) até cem(100)
    int contar = 0;

    //declaração de variável de conta a quantidade de números multiplos
    //de 3
    int qtd= 0;

    while (contar <=100){
        if(contar % 3 == 0){
            printf("%d\n",contar);
            qtd++;
        }
        contar++;

    }
    printf("quantidade de multiplos de 3 é %d\n",qtd);
    return 0;
}