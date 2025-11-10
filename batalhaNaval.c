#include <stdio.h>

int main() {
    // ==============================
    // NÍVEL NOVATO - TABULEIRO 5x5
    // ==============================

    // Criando o tabuleiro 5x5 preenchido com 0 (vazio)
    int tabuleiro[5][5] = {0};

    // Navio 1: horizontal na linha 1 (índice 1)
    for (int j = 0; j < 3; j++) {
        tabuleiro[1][j] = 3; // marca posição com o número 3
    }

    // Navio 2: vertical na coluna 4 (índice 4)
    for (int i = 2; i < 5; i++) {
        tabuleiro[i][4] = 3;
    }

    // Mostrando as coordenadas dos navios
    printf("Coordenadas dos navios:\n");

    // Horizontal
    for (int j = 0; j < 3; j++) {
        printf("Navio horizontal -> Linha 1, Coluna %d\n", j);
    }

    // Vertical
    for (int i = 2; i < 5; i++) {
        printf("Navio vertical -> Linha %d, Coluna 4\n", i);
    }

    printf("\n=== Tabuleiro 5x5 ===\n");

    // Exibindo o tabuleiro completo
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
