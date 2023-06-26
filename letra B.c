#include<stdio.h>
#include<stdlib.h>
int main(){
    int N,M,R;
    printf("Insira um número para exibir a taboada: ");
    scanf("%d", &N);
    for (M = 1; M <= 10; M++) {
        R = N * M;  
        printf("Resultado: %d x %d = %d\n",N, M, R);
    }
    return 0;
    system("pause");
}