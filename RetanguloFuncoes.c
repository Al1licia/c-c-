#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// n existe um else sem if

// typedef char byte; -- dando um novo nome para algo q ja existe


typedef struct {

    float A; //altura
    float L; //Largura
    
    //podem ser considerados outros: Area, Perimetro, Diagonal, vERTICES, etc
} Ret ;

float calcularArea(Ret R);
float calcularPerimetro(Ret R);
int verificarQuadrado(Ret R); // 1 para sim e 0 para nao

int main(){

    system("cls");

    Ret ABCD;
    ABCD.A = 3.0;
    ABCD.L = 4.0;

    printf("area: %.2f\n", calcularArea(ABCD));
    printf("perimetro: %.2f\n", calcularPerimetro(ABCD));
    printf("e quadrado: %d\n", verificarQuadrado(ABCD));
    
    return 0;
}

float calcularArea(Ret R){
    float area = R.A * R.L;
    return area;
}

float calcularPerimetro(Ret R){
    return 2 * R.A + 2 * R.L;
}

int verificarQuadrado(Ret R){
    if(R.A == R.L) return 1;
    else return 0;

    // Outra possibilidade return (R.A == R.L) ? 1 : 0; 
    // ? = OPERADOR TERNARIO - coloca uma condiçao se a resposta for verdadeira 1 se falso 0
    
}
