#include<stdio.h>

int main(){
    int num=64;
    float t=1;
    float soma=0;
    for(int I=1;I<=num;I++){
        soma += t;
        t *= 2;
        }
    printf("%.2f\n", soma);
    return 0;
}