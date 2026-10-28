#include <stdio.h>

int main(){

    float S1, SF, VD;

    printf("Insira o salario bruto: ");
    scanf("%f", &S1);

    if(S1 <= 2000){
        SF = S1;
        printf("%.2f\n", SF);
        printf("Isento de imposto");
    } else if(S1 > 2000 && S1 <= 5000){
        SF = S1 * 0.9;
        VD = S1 * 0.1;
        printf("%.2f\n", SF);
        printf("%.2f", VD);
    } else if(S1 > 5000){
        SF = S1 * 0.8;
        VD = S1 * 0.2;
        printf("%.2f\n", SF);
        printf("%.2f", VD);
    }

    return 0;

}