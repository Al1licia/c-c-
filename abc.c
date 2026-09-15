#include <stdio.h>
#include <math.h>

int main(){
    system("cls");

    int A, B, C;
    float x, y, z, w, v;

    A = 3;
    B = 7;
    C= 4;
    
    x= (A + C) > B;
    y= B >= (A + 2);
    z= C == (B - A);
    w= (B + A) <= C;
    v= (C + A) > B;
    
    printf("O valor de x e %1.f\n", x);
    printf("O valor de y e %1.f\n", y);
    printf("O valor de z e %1.f\n", z);
    printf("O valor de w e %1.f\n", w);
    printf("O valor de v e %1.f\n", v);

    return 0;
}