#include <stdio.h>

int main() {

    float nota;

    printf("Digite a sua nota: \n");
    scanf("%f", &nota);

    if(nota >= 9){
        printf("Seu conceito e A!\n");
    } else if(nota >= 7 && nota < 9){
        printf("Seu conceito e B!\n");
    } else if(nota >= 5 && nota < 7){
        printf("Seu conceito e C!\n");
    } else{
        printf("Seu conceito e D!\n");
    }
    
    return 0;
}
