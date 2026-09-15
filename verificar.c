#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system ("cls");

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    switch (numero % 2) {
    case 0:
        printf("O numero e par!");
        break;
    
    case 1:
        printf("O numero e impar!");
        break;
    }

    return 0;
}
