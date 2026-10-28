#include <stdio.h>

int main() {

    int a, b, total;
    char operador;

    printf("Digite os valores e um operador: \n");
    scanf("%d %d %c", &a, &b, &operador);

    if(operador == '-'){
        total = a - b;
        printf("%d - %d = %d", a, b, total);   
    } else if(operador == '+'){
        total = a + b;
        printf("%d + %d = %d", a, b, total);
    } else if(operador == '*'){
        total = a * b;
        printf("%d * %d = %d", a, b, total);
    } else if(operador == '/'){
        total = a / b;
        printf("%d / %d = %d", a, b, total);
    } else{
        printf("Este operador nao pode ser computado");
    }

    return 0;
}
