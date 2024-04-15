#include <stdio.h>
#include <stdlib.h>

// estrutura da pilha
typedef struct {
  int valor;
  struct PilhaElemento *prox;
} PilhaElemento;
// tipo ponteiro para a estrutura
typedef struct {
  PilhaElemento *topo;
} Pilha;

// Função para empilhar
int empilhar(Pilha *pilha, int valor) {
  PilhaElemento *novoelemento = (PilhaElemento *)malloc(sizeof(PilhaElemento));
  if (novoelemento == NULL) {
    return 0;
  }
  // atribuindo valores do novo elemento
  novoelemento->valor = valor;
  // aponta para o proximo elemento
  novoelemento->prox = pilha->topo;
  // atualiza o topo da pilha
  pilha->topo = novoelemento;
  printf("%d empilhado\n", valor);
}

// função para desempilhar
int desempilhar(Pilha *pilha) {
  if (pilha->topo == NULL) {
    printf("Pilha vazia\n");
    return 0;
  }
  PilhaElemento *temp = pilha->topo;
  int valor = temp->valor;
  pilha->topo = temp->prox;
  free(temp);
  printf("%d desempilhado\n", valor);
  return valor;
}

int main(void) {

  Pilha pilha;
  pilha.topo = -1;
  printf("Hello Pilha dinâmica\n");

  empilhar(&pilha, 10);
  empilhar(&pilha, 20);
  empilhar(&pilha, 30);
  empilhar(&pilha, 40);
  empilhar(&pilha, 50);

  // desempilhando
  desempilhar(&pilha);
  desempilhar(&pilha);
  desempilhar(&pilha);

  return 0;
}