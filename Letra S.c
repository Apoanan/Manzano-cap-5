#include <stdio.h>
int main(){
    int Num1, num2,cont=0;
    printf("Insira o dividendo: ");
    scanf("%d",&num2);

    printf("Insira O divisor: ");
    scanf("%d", &Num1);
    
    for(int i = Num1; i <= num2;i+=Num1){
        cont++;
        };
    printf("O valor de %d divido por%d e: %d",num2,Num1,cont);
    return 0;

}