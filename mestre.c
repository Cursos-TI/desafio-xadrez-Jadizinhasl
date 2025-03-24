#include <stdio.h>

// Função recursiva para o movimento da Torre
void movimento_torre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        movimento_torre(casas - 1); // Recursão para mover uma casa para a direita
    }
}

// Função recursiva para o movimento do Bispo (diagonal para cima e à direita)
void movimento_bispo(int casas) {
    if (casas > 0) {
        printf("Cima Direita\n");
        movimento_bispo(casas - 1); // Recursão para mover uma casa na diagonal
    }
}

// Função recursiva para o movimento da Rainha (para a esquerda)
void movimento_rainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        movimento_rainha(casas - 1); // Recursão para mover uma casa para a esquerda
    }
}

// Função com loops complexos para o movimento do Cavalo (duas casas para cima e uma para a direita)
void movimento_cavalo() {
    // Loop externo (movimento vertical)
    for (int i = 0; i < 2; i++) {
        printf("Cima\n"); // Movimento para cima
    }
    
    // Loop interno (movimento horizontal)
    for (int j = 0; j < 1; j++) {
        printf("Direita\n"); // Movimento para a direita
    }
}

int main() {
    // Simulação do movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    movimento_torre(5);
    
    // Simulação do movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo:\n");
    movimento_bispo(5);
    
    // Simulação do movimento da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    movimento_rainha(8);
    
    // Simulação do movimento do Cavalo (2 casas para cima e 1 para a direita)
    printf("\nMovimento do Cavalo:\n");
    movimento_cavalo();

    return 0;
}
