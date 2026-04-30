#include <stdio.h>

float potencia(float base, float expoente){
    if(expoente == 0){
        return 1;
    }else{
        return base * potencia(base, expoente - 1);
    }
}

int main(){
    float base, expoente;

    printf("Digite o numero da base: ");
    scanf("%f", &base);

    printf("Digite o numero do expoente: ");
    scanf("%f", &expoente);

    float resultado = potencia(base, expoente);

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
