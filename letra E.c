#include<stdio.h>
#include<stdlib.h>
int main(){
    int I;
    for(I = 1; I <= 20; I++){
            if(I % 2 == 1) {
                printf("%d\n", I);
            }
    }
    system("pause");
}