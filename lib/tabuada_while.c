# include <stdio.h>

int main(){

// Número que o usuario irá digitar para fazer a tabuada
int num;
//Variavel que inicia a tabuada em 0(zaro) e vai ate 10 
int contar=0;
//guarda o resultado da multiplacação da variavel num com a contar
int rs;
printf("digite um numero para fazer a tabuada:\n");
scanf("%d",&num);

while (contar <= 10){
    rs = num * contar;
    printf("%d  x %d = %d\n",num,contar,rs);
    contar++;
}
return 0;

}
