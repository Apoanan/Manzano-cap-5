#include<stdio.h>
long long fatorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fatorial(n - 1);
}
int main(){
    int i;
    long long V=1;
    for(i=1;i<10;i+=2){
        
        V*=fatorial(i);
        
 printf(" %lld\n",V);      
}
    
   
    return 0;
}