#include <stdio.h>
#include <math.h>

int main(){

    system("cls");

    float altura, peso, imc;

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    printf("O seu IMC e %f", imc);
    
    return 0;

}