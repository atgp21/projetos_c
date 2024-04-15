#include <stdio.h>

typedef struct {
  int topo;
  int vetor[10];
} Pilha;

Pilha pilha; // declarando a pilha
int valor;
int opcao;
int i;

// função para empilhar
int empilhar(int valor) {
  pilha.topo++;
  pilha.vetor[pilha.topo] = valor;
  return 1;
}
// função para desempilhar
int desempilhar() {
  int valorDesempilhado = pilha.vetor[pilha.topo];
  pilha.topo--;
  return valorDesempilhado;
}

int main(void) {

  pilha.topo = -1; // zerando a pilha
  printf("Hello pilha\n");

  // laço de repetição para escolher o valor
  for (i = 0; i < 10; i++) {
    printf("Digite um valor para empilhar\n");
    scanf("%d", &valor);
    empilhar(valor);
  }

  // laço de repetição para escolher a opção
  do {
    printf("Escolha uma opção:\n");
    printf("1 - Desempilhar\n");
    printf("2 - Sair\n");
    scanf("%d", &opcao);
    // se a opção for 1, desempilhar
    if (opcao == 1) {
      while (pilha.topo >= 0) {
        printf("Valor desempilhado: %d\n", desempilhar());
      }
      printf("Pilha vazia\n");
    }
    // se a opção for 2, sair
  } while (opcao != 2);

  return 0;
}