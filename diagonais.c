#include <stdio.h>

int main(){

    int n, diagonais;

    printf("Digite a quantidade de diagonais: ");
    scanf("%d", &n);

    diagonais = n * (n - 3) / 2;

    printf("A quantidade de diagonais e: %d\n", diagonais);

    return 0;
}