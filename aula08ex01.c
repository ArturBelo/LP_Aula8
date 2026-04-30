#include <stdio.h>

void lanca(int num){
    if (num < 1){
        printf("Decolar! ");
    } else {
        printf("%d, ", num);
        lanca (num - 1);
    }
}

int main (){
    int numero;
    printf("Digite um numero: ");
        scanf("%d", & numero);
    lanca(numero);
    return 0;
}