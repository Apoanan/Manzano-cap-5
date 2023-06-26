#include <stdio.h>
int main(){
    int valor,maior,menor;
    printf("Insira valores inteiros e positivos\n. Ecenrre inserindo um numero negativo\n");
    scanf("%d",&valor);
    maior=valor;
    menor=valor;
    while(valor>=0){
        if(valor>maior){
            maior=valor;
        }
        if(valor<menor){
            menor = valor;
        }

        printf("Insira valores inteiros e positivos. Ecenrre inserindo um número negativo");
        scanf("%d",&valor);
    }
    printf("O maior valor inserido e: %d\n", maior);
    printf("O menor valor inserido e: %d\n", menor);
    return 0;
} 
   