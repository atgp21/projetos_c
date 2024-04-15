#include <stdio.h>

int pilha[10]; // declarando a pilha de tamanho 10
int i;         // declarando a variavel i
int topo = -1; // zerando a pilha
int valor;     // variavel para colocar o valor a ser empilhado
int opcao;     // variavel para escolher a opção

// função para empilhar
int empilhar(int valor) {
  pilha[++topo] = valor;
  return 1;
}
// função para desempilhar
int desempilhar() { return pilha[topo--]; }

int main(void) {
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
      while (topo >= 0) {
        printf("Valor desempilhado: %d\n", desempilhar());
      }
      printf("Pilha vazia\n");
    }
    // se a opção for 2, sair
  } while (opcao != 2);

  return 0;
}