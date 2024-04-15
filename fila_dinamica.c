#include <stdio.h>

// estrutura da fila
typedef struct {
  int valor;
  struct fila_elemento *prox;
} fila_elemento;

// tipo ponteiro para a estrutura
typedef struct {
  fila_elemento *inicio;
  fila_elemento *fim;
} Fila;

// inicializando a fila
void inicializarfila(Fila *fila) {
  fila->inicio = NULL;
  fila->fim = NULL;
}

// função enfileirar
int enfileirar(Fila *fila, int valor) {
  fila_elemento *novo = (fila_elemento *)malloc(sizeof(fila_elemento));
  if (novo == NULL)
    return -1;
  novo->valor = valor;
  // novo->prox = NULL;
  if (fila->inicio == NULL) {
    fila->inicio = novo;
    fila->fim = novo;
  }
  fila->fim->prox = novo;
  fila->fim = novo;
  fila->fim->prox = NULL;
  printf("%d enfileirado\n", valor);
  return 1;
}

// função desenfileirar
int desenfileirar(Fila *fila) {
  if (fila->inicio == NULL) {
    printf("Fila vazia\n");
    return -1;
  }
  fila_elemento *temp = fila->inicio;
  int valor = temp->valor;
  fila->inicio = fila->inicio->prox;
  int v = temp->valor;
  free(temp);
  return valor;
}

int main(void) {
  Fila fila;
  inicializarfila(&fila);
  printf("Hello Fila dinâmica\n");

  // enfileirando
  enfileirar(&fila, 10);
  enfileirar(&fila, 20);
  enfileirar(&fila, 30);
  enfileirar(&fila, 40);
  enfileirar(&fila, 50);
  enfileirar(&fila, 60);

  // desenfileirando
  printf("Desefileirando: %d\n", desenfileirar(&fila));
  printf("Desefileirando: %d\n", desenfileirar(&fila));
  printf("Desefileirando: %d\n", desenfileirar(&fila));
  printf("Desefileirando: %d\n", desenfileirar(&fila));

  return 0;
}