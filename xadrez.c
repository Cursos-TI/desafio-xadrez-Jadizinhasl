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

    return 0;
}
