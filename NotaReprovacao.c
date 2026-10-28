#include <stdio.h>

int main(){

    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if(nota >= 7){
        printf("Aluno aprovado");
    } else if (nota < 7 && nota >= 5){
        printf("Aluno em recuperacao");
    } else if (nota < 5){
        printf("Aluno reprovado");
    }
    
    return 0;
}