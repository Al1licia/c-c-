#include <stdio.h>
#include <math.h>

int main(){

    system("cls");

    int x, a, b;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite um valor para a: ");
    scanf("%d", &a);
        
    printf("Digite um valor para b: ");
    scanf("%d", &b);
    
    if (a <= x && x <= b) {
        printf("x pertence ao intervalo [%d,%d]\n", a, b);
    }
    else {
        printf("x NAO pertence ao intervalo [%d,%d]\n", a, b);
    }

    return 0;
}