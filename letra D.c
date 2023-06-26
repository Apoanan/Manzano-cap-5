#include<stdio.h>
#include<stdlib.h>
int main(){
    int M=0;
    for(int n=1; n<=500; n++){
     if (n % 2 == 0) {
            
            M += n;
        }
    }
    printf("a soma dos numeros pares de 1 a 500 e: %d\n",M);
    system("pause");
    return 0;
}