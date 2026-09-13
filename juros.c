#include <stdio.h>
#include <math.h>

int main (){
  double deposito, taxa, juros, montante;
  int tempo;

  deposito = 1.500; 
  taxa = 0.025;
  tempo = 3;

  montante = deposito * pow(1 + taxa, tempo);

  juros = montante - deposito;

  printf("deposito inicial: R$ %.3f\n", deposito);
  printf("taxa de juros: %f\n", taxa);
  printf("juros: R$ %f\n", juros);
  printf("montante: R$ %.3f\n", montante);
  printf("tempo: %d\n", tempo);

  return 0;

}