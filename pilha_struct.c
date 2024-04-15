#include <stdio.h>
#include <stdlib.h>

// Estrutura de dados da pilha
struct Pilha {
    int topo; // Índice do topo da pilha
    int capacidade; // Capacidade máxima da pilha
    int *itens; // Ponteiro para o array de itens
};

// Cria uma nova pilha
struct Pilha* criarPilha(int capacidade) {
    struct Pilha *pilha = (struct Pilha*) malloc(sizeof(struct Pilha));
    pilha->topo = -1; // A pilha está inicialmente vazia
    pilha->capacidade = capacidade;
    pilha->itens = (int *) malloc(capacidade * sizeof(int));
    return pilha;
}

// Verifica se a pilha está vazia
int pilhaVazia(struct Pilha *pilha) {
    return (pilha->topo == -1);
}

// Verifica se a pilha está cheia
int pilhaCheia(struct Pilha *pilha) {
    return (pilha->topo == pilha->capacidade - 1);
}

// Insere um item na pilha
void empilhar(struct Pilha *pilha, int item) {
    if (pilhaCheia(pilha)) {
        printf("Erro: Pilha cheia!\n");
        return;
    }
    pilha->itens[++pilha->topo] = item;
}

// Remove um item da pilha
int desempilhar(struct Pilha *pilha) {
    if (pilhaVazia(pilha)) {
        printf("Erro: Pilha vazia!\n");
        return -1; 
    }
    return pilha->itens[pilha->topo--];
}

// Retorna o item no topo da pilha
int topoPilha(struct Pilha *pilha) {
    if (pilhaVazia(pilha)) {
        printf("Erro: Pilha vazia!\n");
        return -1; 
    }
    return pilha->itens[pilha->topo];
}

// Libera a memória alocada para a pilha
void liberarPilha(struct Pilha *pilha) {
    free(pilha->itens);
    free(pilha);
}

// Função principal
int main() {
    // Cria uma pilha com capacidade de 10 andares
    struct Pilha *pilha = criarPilha(10);

    // Solicita ao usuário para inserir valores na pilha
    printf("Insira os valores que deseja empilhar (10 no máximo):\n");
    for (int i = 0; i < 10; i++) {
        int valor;
        printf("Valor %d: ", i + 1);
        scanf("%d", &valor);
        empilhar(pilha, valor);
    }

    // Exibe os valores da pilha
    printf("\nValores da pilha:\n");
    while (!pilhaVazia(pilha)) {
        printf("%d\n", desempilhar(pilha));
    }

    // Libera a memória alocada para a pilha
    liberarPilha(pilha);

    return 0;
}