#include <stdio.h>
#include <math.h>

int main(){

    system("cls");

    double dolar, euro, cambio;

    cambio = 0.92;

    printf("Digite o valor em dolar: ");
    scanf("%lf", &dolar);

    euro = dolar * cambio;

    printf("O valor em euro e %.2lf", euro);

    return 0;
}