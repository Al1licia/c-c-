#include <stdio.h>

int main() {

    int A = 3, B = 7, C = 4;
    int a, b, c, d, e;

    a = (A + C)>B;
    b = B >= (A + 2);
    c = C == (B - A);
    d = (B + A) <= C;
    e = (C + A)> B;

    printf("O resultado de cada operacao e: %d, %d, %d, %d e %d", a, b, c, d, e);

    return 0;
}
