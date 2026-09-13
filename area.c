#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c;
    double p, area;

    printf("Digite o valor do lado a: ");
    scanf("%lf", &a);
    printf("Digite o valor do lado b: ");
    scanf("%lf", &b);
    printf("Digite o valor do lado c: ");
    scanf("%lf", &c);

    p = (a + b + c) / 2;

    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("O semiperimetro e: %lf\n", p);
    printf("A area do triangulo e: %lf\n", area);

    return 0;

}