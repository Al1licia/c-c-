#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");

    int dias;
    char semana;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dias);

    switch (dias)
    {
    case 1:
        printf("O dia correspondente e Domingo");
        break;
    
    case 2:
        printf("O dia correspondente e Segunda-feira");
        break;
    
    case 3:
        printf("O dia correspondente e Terca-feira");
        break;
       
    case 4:
        printf("O dia correspondente e Quarta-feira");
        break;

    case 5:
        printf("O dia correspondente e Quinta-feira");
        break;

    case 6:
        printf("O dia correspondente e Sexta-feira");
        break;
        
    case 7:
        printf("O dia correspondente e Sabado");
        break;
    
    default:
        printf("ERRO ERRO ERRO ERRO ERRO");
        break;
    }
    return 0;
}