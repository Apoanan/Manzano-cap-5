#include<stdio.h>
#include<stdlib.h>
int main(){
    int I;
    printf("Os numeros divisiveis por 4, e menores que 200, sao: \n");
    for(I = 1; I < 200; I++){
        if(I % 4 == 0){
            printf("%d\n",I);
        }
    }
    system("pause");
    return 0;
}