#include<stdio.h>

int main(){
    char comodo[50],continuar;
    float area_total=0.0;
    do{
        float area,comprimento,largura;

        printf("Diga o nome do comodo: ");
        scanf("%s\n",comodo);

        printf("Coloque o o comprimento do comodo: ");
        scanf("%d\n",&comprimento);

        printf("Coloque a largura do comodo: ");
        scanf("%d\n",&largura);

        area = comprimento * largura;
        area_total += area;

        printf("Deseja inserir mais algum commodo?(digite:S ou N)");
        scanf(" %c",&continuar);
    }
    while(continuar == 'S' || continuar == 's');

printf("A area total da residencia e: %.f metros quadrados",area_total);
    
    return 0;
}