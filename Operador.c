#include <stdio.h>
#include <stdlib.h>

int main(){
    float A, B,resultado; 
    char operador;

    printf("Digite dois numeros e um operador matematico para o calculo: ");
    scanf("%f %f %c", &A,  &B, &operador);

    switch (operador)
    {
    case '+':
        resultado = A + B;
        printf("O resultado e %.2f", resultado);
        break;
    case '-':
        resultado = A - B;
        printf("O resultado e %.2f", resultado);
        break;
    case '*':
        resultado = A * B;
        printf("O resultado e %.2f", resultado);
        break;
    case '/':
        resultado = A / B;
        printf("O resultado e %.2f", resultado);
        break;
    default:
        printf("Operador invalido<<<<<<<<<<<<<<,");
        break;

    }

    return 0;

}