#include<stdio.h>

int main(){
    int I, valor;
    float MD;
    float somatorio=0;

    for(I=1;I<=10;I++){
        printf("Insira o valor: ");
        scanf("%d\n",&valor);
        somatorio += valor;
        
    }
    MD = (somatorio/10);
    printf("O valor do somatorio e: %.f\n", somatorio);  
    printf("A media do valor e: %.f", MD);
    return 0;
}