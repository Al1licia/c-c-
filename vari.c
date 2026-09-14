#include <stdio.h>
#include <math.h>

int main(){

    float A, B, C;
    double delta, x1, x2;

    printf("Digite um valor INTEIRO para A: ");
    scanf("%f", &A);
    printf("Digite um valor INTEIRO para B: ");
    scanf("%f", &B);
    printf("Digite um valor INTEIRO para C: ");
    scanf("%f", &C);

    delta = (B * B) - 4 * A * C;
    printf("O valor de delta e: %2.0lf\n", delta);

    if(delta < 0){
        printf("Nao existem raizes reais para a equacao.\n");
    }

    else if(delta > 0){
        x1 = (-B + sqrt(delta)) / (2 * A);
        x2 = (-B - sqrt(delta)) / (2 * A);
    
        printf("O valor de x1 e: %.2lf\n", x1);
        printf("O valor de x2 e: %.2lf\n", x2);
    
    }
    
    return 0;
}