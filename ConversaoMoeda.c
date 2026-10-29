#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float reais, cambio;
    int conversao;

    printf("Digite o valor em reais para a conversao: ");
    scanf("%f", &reais);

    printf("Opcoes de conversao:\n");
    printf("1. Dolar\n");
    printf("2. Euro\n");
    printf("3. Libra Esterlina\n");
    printf("4. Iene japones\n");
    printf("Selecione a opcao de cambio: ");
    scanf("%d", &conversao);

    switch (conversao)
    {
    case 1:
        cambio = reais / 0.2;
        printf("Cambio ficou: %.2fUSD", cambio);
        break;
    case 2:
        cambio = reais / 0.18;
        printf("Cambio ficou: %.2fEUR", cambio);
        break;
    case 3:
        cambio = reais / 0.16;
        printf("Cambio ficou: %.2fGBP", cambio);
        break;
    case 4:
        cambio = reais * 27;
        printf("Cambio ficou: %.2fJPY", cambio);
        break;
    default:
        printf("Opcao invalida");
        break;
    }

    return 0;
}