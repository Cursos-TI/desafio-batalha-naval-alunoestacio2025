#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {
    char letras[COLUNAS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int numeros[LINHAS] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int tabuleiro[LINHAS][COLUNAS] = {0};

    // ADICIONANDO NAVIOS E HABILIDADES FORA DO LOOP DE IMPRESSÃO

    // HORIZONTAL:
    int linha = 0, coluna = 0;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha][coluna + i] = 3;
    }

    // VERTICAL:
    linha = 0; coluna = 9;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha + i][coluna] = 3;
    }

    // DIAGONAL:
    linha = 0; coluna = 7;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha + i][coluna - i] = 3;
    }

    // CONE:
    int linha_inicio = 7;
    int linha_centro = 2;
    for (int i = 0; i < 3; i++) {
        for (int j = -i; j <= i; j++) {
            tabuleiro[linha_inicio + i][linha_centro + j] = 3;
        }
    }

    // CRUZ:
    int linha_centro_cruz = 7;
    int coluna_centro_cruz = 7;
    for (int i = -1; i <= 1; i++) {
        for (int j = -2; j <= 2; j++) {
            if (i == 0 || j == 0) {
                tabuleiro[linha_centro_cruz + i][coluna_centro_cruz + j] = 3;
            }
        }
    }

    // OCTAEDRO:
    int linha_centro_octaedro = 3;
    int coluna_centro_octaedro = 2;

    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (i == 0 || j == 0) {
            tabuleiro[linha_centro_octaedro + i][coluna_centro_octaedro + j] = 3;
        }
    }
}


    // IMPRIME O TABULEIRO
    printf("   TABULEIRO BATALHA NAVAL\n   ");
    for (int i = 0; i < COLUNAS; i++) {
        printf("%c ", letras[i]);
    }
    printf("\n");

    for (int i = 0; i < LINHAS; i++) {
        printf("%2d ", numeros[i]);
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
