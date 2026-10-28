#include <stdio.h>

int main(){
    int x;
    int A = 4, B = 12;

    printf("Digite um numero e descubra se ele faz parte do intervalo\n ");
    scanf("%d", &x);
    
    if (x >= A && x <= B) {
        printf("%d ∈ [%d, %d]", x, A, B);
    } else {
        printf("%d ∉ [%d,%d]", x, A, B);
    }

    return 0;
}
