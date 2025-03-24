#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n"); // A Torre move-se 5 casas para a direita
    }
    
    // Simulação do movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo:\n");
    int i = 1;
    while (i <= 5) {
        printf("Cima Direita\n"); // O Bispo move-se para cima e à direita
        i++;
    }

    // Simulação do movimento da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n"); // A Rainha move-se 8 casas para a esquerda
        j++;
    } while (j <= 8);

    // Simulação do movimento do Cavalo (2 casas para baixo e 1 para a esquerda)
    printf("\nMovimento do Cavalo:\n");
    
    // O Cavalo move-se em "L", ou seja, 2 casas para baixo e 1 para a esquerda
    for (int k = 1; k <= 2; k++) {
        printf("Baixo\n"); // Movimento para baixo
    }

    // Usando o loop while para o movimento para a esquerda
    int l = 1;
    while (l <= 1) {
        printf("Esquerda\n"); // Movimento para a esquerda
        l++;
    }

    return 0;
}
