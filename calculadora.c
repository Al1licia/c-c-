#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system("cls");

    float a, b, r;
    char operador;

    printf("Digite dois numeros e um operador matematico: ");
    scanf("%f %f %c", &a, &b, &operador);

    switch (operador) {
    case '+':
        r = a + b;
        printf("%.0f + %.0f = %.0f", a, b, r);
        break;

    case '-':
        r = a - b;
        printf("%.0f - %.0f = %.0f", a, b, r);
        break;
    
    case '*':
        r = a * b;
        printf("%.0f * %.0f = %.0f", a, b, r);
        break;

    case '/':
        r = a / b;
        printf("%.0f / %.0f = %.0f", a, b, r);
        break;

    default:
        printf("Invalido");
        break;
    }
    return 0;
}