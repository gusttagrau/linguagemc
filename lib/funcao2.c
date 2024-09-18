#include <stdio.h>
void menssagem();
void linha();

int main(){

    menssagem();
    linha();

    return 0;
}

void menssagem(){
    printf("ola, seja bem vindo");
}
void linha(){
    int x = 1;
    printf("\n");
    for(x ; x <= 30 ; x++){
        printf("-");
    }
    printf("\n");
}