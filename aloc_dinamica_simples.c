#include <stdio.h>

// alocação dinâmica
int n;
int *numero;
int *vetordinamico;

int main(void) {
  printf("Hello Alocação Dinâmica\n");

  printf("Informe o tamanho do vetor que você deseja criar: \n");
  scanf("%d", &n);

  numero = (int *)malloc(sizeof(int));            // alocação dinâmica
  vetordinamico = (int *)malloc(sizeof(int) * n); // alocação dinâmica
  // lendo os valores do vetor
  for (int i = 0; i < n; i++) {
    printf("Informe o valor da posição [%d]: \n", i);
    scanf("%d", &vetordinamico[i]);
  }

  // imprimindo os valores do vetor
  for (int i = 0; i < n; i++) {
    printf("Posição [%d] = %d \n", i, vetordinamico[i]);
  }

  free(vetordinamico); // liberando a memória alocada

  return 0;
}