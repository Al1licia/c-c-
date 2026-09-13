#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.14159265358979323846

int main(int argc, char *argv[]) {
    double Graus, Resultado;
    Graus = 120.0;
    Resultado = sin(Graus * (PI / 180.0));
    printf("O valor do seno de %2.1lf e %1.2lf\n", Graus, Resultado);
    return 0;
}