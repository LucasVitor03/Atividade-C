#include <stdio.h>

int main(void) {

  int n1;
  int n2;
  int n3;
  char lixo;

  printf("Digite a nota 1: ");
  scanf("%d", &n1);

  printf("Digite a nota 2: ");
  scanf("%d", &n2);

  printf("Digite a nota 3: ");
  scanf("%d", &n3);
  
  double media = (n1 + n2 + n3)/3;

  printf("A média da suas notas são: %f", media);

  
  return 0;
}