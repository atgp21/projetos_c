#include <stdio.h>

#define MAX_SIZE 10
// definindo o tamanho maximo da fila (constante)
int fila[MAX_SIZE];
int inicio = -1;
int fim = -1;

int enfileirar(int valor) {
  fila[++fim] = valor;
  return 0;
}
int desenfileirar() {
  int valor = fila[0];
  for (int i = 0; i < fim; i++) {
    fila[i] = fila[i + 1];
  }
  fim--;
  return valor;
}

int main(void) {
  printf("Hello Fila\n");
  enfileirar(10);
  enfileirar(20);
  enfileirar(30);
  enfileirar(40);
  enfileirar(50);

  printf("Fila Atual\n");
  for (int i = 0; i < MAX_SIZE; i++) {
    printf("%d\n", fila[i]);
  }
  printf("Atendido: %d\n", desenfileirar());
  printf("Fila Atual\n");
  for (int i = 0; i < MAX_SIZE; i++) {
    printf("%d\n", fila[i]);
  }
  printf("Atendido: %d\n", desenfileirar());
  printf("Fila Atual\n");
  for (int i = 0; i < MAX_SIZE; i++) {
    printf("%d\n", fila[i]);
  }
  printf("Atendido: %d\n", desenfileirar());
  printf("Fila Atual\n");
  for (int i = 0; i < MAX_SIZE; i++) {
    printf("%d\n", fila[i]);
  }
  printf("Atendido: %d\n", desenfileirar());
  printf("Fila Atual\n");
  for (int i = 0; i < MAX_SIZE; i++) {
    printf("%d\n", fila[i]);
  }
  printf("Atendido: %d\n", desenfileirar());
  printf("Fila Atual\n");
  for (int i = 0; i < MAX_SIZE; i++) {
    printf("%d\n", fila[i]);
  }
  return 0;
}