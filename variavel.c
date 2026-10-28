#include <stdio.h>

int main() {

int idade = 25;
int salario = 3000;

int A = idade >= 18 && salario > 2000;
int B = idade < 16 || salario < 1500;
int C = !(idade >= 60);

printf("%d, %d, %d", A, B, C);

return 0;

}
