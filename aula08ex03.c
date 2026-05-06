#include <stdio.h>

float potencia(float base, int expoente){

    if(expoente == 0){
        return 1;
    }

    return base * potencia(base, expoente - 1);
}

int main(){

    float base;
    int expoente;

    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    printf("Resultado: %.2f\n", potencia(base, expoente));

    return 0;
}
