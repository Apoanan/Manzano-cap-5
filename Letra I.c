#include<stdio.h>

int main(){
    
    int I,Atual = 0, Proximo = 1, Anterior = 0;
    printf("A sequencia é:");
    
    for(I=1;I<=15;I++){
        printf("%d\n", Atual);
           Anterior = Atual;
           Atual = Proximo;
           Proximo = Atual + Anterior; }
    return 0;
}