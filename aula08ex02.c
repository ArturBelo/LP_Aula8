#include <stdio.h>

int somar(int n){
    if(n ==0 ){
        return 0;
    } else {
        return n + somar (n-1);
    }
}

int main(){
    int numero; 
    printf("Digite um numero: ");
        scanf("%d", &numero);
    printf("%d", somar(numero));
    return 0;
    
}