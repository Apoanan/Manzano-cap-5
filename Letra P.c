#include<stdio.h>

int main(){
    int I,valor,soma;
    float md;
    for(I=50;I<=70;I+=2){
        valor += I;
    }
    md = valor/10;
    printf("A soma dos números e: %d\n",valor);
    printf("A media aritimetica e: %.f", md);
    return 0;
}