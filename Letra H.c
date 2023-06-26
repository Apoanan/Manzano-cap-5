#include<stdio.h>

int main(){
    int B,E;
    long long R=1;
    printf("Insira os valor da Base: \n");
    scanf("%d",&B);
    printf("Insira os valor do Expoente: \n");
    scanf("%d",&E);
    if (E < 0) {
        printf("O expoente deve ser um número natural.\n");
        return 0;
    }
   for(int I=0; I < E; I++){
        R*=B;
        }
    printf("O valor da exponenciacao e: %lld\n",R);
    return 0;
}