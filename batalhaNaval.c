#include <stdio.h>

int main() {
    
    // Letras das colunas (horizontal)
    char horizontal[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Números das linhas (vertical)
    int vertical[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int tabuleiro[10][10] = {0};

    //ADICIONANDO NAVIO
    tabuleiro[2][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;
    tabuleiro[6][6] = 3;
    tabuleiro[7][6] = 3;
    tabuleiro[8][6] = 3;

    // Título do tabuleiro
    printf("   TABULEIRO BATALHA NAVAL\n   ");

    // Imprime letras do cabeçalho
    for (int i = 0; i < 10; i++) {
        printf("%c ", horizontal[i]);
    }
    printf("\n");

    // Imprime linhas do tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%2d ", vertical[i]);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    return 0;
}
