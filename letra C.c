#include<stdio.h>

int main(){
    int N,M=0;
    for(N=1; N<=100; N++){
        M += N;
    }
    printf("A soma dos números naturais de 1 a 100 e: %d\n", M);
    return 0;
    
}