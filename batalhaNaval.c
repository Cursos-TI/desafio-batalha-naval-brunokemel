#include <stdio.h>

int main() {
    printf("===== NÍVEL AVENTUREIRO =====\n\n");

    int tabuleiro[10][10] = {0}; // inicializa tudo com 0 (vazio)

    // Navio 1 - vertical
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][2] = 3; // coluna 2
    }

    // Navio 2 - horizontal
    for (int j = 5; j < 9; j++) {
        tabuleiro[6][j] = 3; // linha 6
    }

    // Navio 3 - diagonal principal (↘)
    for (int i = 0; i < 5; i++) {
        tabuleiro[i][i] = 3;
    }

    // Navio 4 - diagonal inversa (↙)
    for (int i = 0; i < 5; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    // Exibe o tabuleiro completo
    printf("Tabuleiro 10x10:\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}