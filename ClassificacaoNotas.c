#include <stdio.h>
#include <stdlib.h>

int main(){

    char nota;

    printf("Digite a sua nota alcancada: ");
    scanf("%c", &nota);

    switch (nota)
    {
    case 'A':
        printf("Excelente");
        break;
    case 'B':
        printf("Bom");
        break;
    case 'C':
        printf("Regular");
        break; 
    case 'D':
        printf("Ruim");
        break;      
    case 'E':
        printf("Pessimo");
        break;          
    default:
     printf("Nota invalida");
        break;
    }
    
    return 0;
}