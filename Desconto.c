#include <stdio.h>

int main(){

    float valor, desconto;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    if(valor > 100 && valor <= 200){
        desconto = valor * 0.9;
        printf("O valor final com desconto aplicado e de: %.2f\n", desconto);
    } else if (valor > 200 && valor <= 500){
        desconto = valor * 0.85;
        printf("O valor final com desconto aplicado e: %.2f\n", desconto);
    } else if (valor > 500){
        desconto = valor * 0.8;
        printf("O valor final com desconto aplicado e: %.2f\n", desconto);
    }

    return 0;
}