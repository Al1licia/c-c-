#include <stdio.h>
#include <math.h>

int main (){

    int X, Y, x, y; 
    float distancia;

    printf("Digite as coordenadas dos pontos (X, Y) e (x, y): ");
    scanf("%d %d %d %d", &X, &Y, &x, &y);

    distancia = sqrt(pow((x -X), 2) + pow ((y - Y), 2));

    printf("A distancia entre os pontos e: %.4f\n", distancia);

    return 0;
}