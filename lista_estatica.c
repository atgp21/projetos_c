#include <stdio.h>

// constante
#define TAM_MAX 10
int lista[TAM_MAX];
// zerando a lista
int tamanho = -1;

// FUNÇÃO PARA INSERIR
int inserir(int valor) {
  lista[++tamanho] = valor;
  return 0;
}

// FUNÇÃO PARA IMPRIMIR
int imprimir() {
  for (int i = 0; i <= tamanho; i++) {
    printf("Lista[%d] = %d\n", i, lista[i]);
  }
  return 0;
}

// FUNÇÃO PARA REMOVER
int remover(int valor) { return 0; }

// FUNÇÃO PARA PESQUISAR
int pesquisar(int valor) {
  int i = -1;
  while (valor != lista[++i]) {
    if (i >= tamanho)
      return -1;
  }
  return i;
}

int main(void) {
  printf("Helllo Lista\n");

  inserir(10);
  inserir(20);
  inserir(30);
  inserir(40);
  inserir(50);

  printf("Tamanho da lista: %d\n", tamanho);
  imprimir();
  printf("O elemento 20 esta na posição: %d\n", pesquisar(20));
  printf("O elemento 30 esta na posição: %d\n", pesquisar(30));

  return 0;
}