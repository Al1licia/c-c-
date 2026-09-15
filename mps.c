#include <stdio.h>
#include <math.h>

int main(){
    system ("cls");

    double km, m, conversao;
    conversao = 0.277;
    printf("Digite a velocidade em quilometros: ");
    scanf("%lf", &km);

    m = km * conversao;

    printf("A velocidade e %.2lf m/s", m);

    return 0;
}