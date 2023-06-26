#include<stdio.h>

int main(){
    int I;
    float MD,somatorio=0,valor;
    
    for(I=0;I<=0;I++){
        printf("Insira o valor %d°: ",I+1);
        scanf("%d\n",&valor);
        if(valor<0){
            break;
        }
        else{somatorio += valor;}
        
    }
    MD = (somatorio/I+1);
    print(somatorio,MD,I);
    
    return 0;
}
void print(int somatorio, int MD, int I){
    printf("O valor do somatorio e: %.f\n", somatorio);  
    printf("A media do valor e: %.f", MD);
    printf("O numero de valores lidos e: %d", I+1);
}