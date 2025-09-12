#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {


    // Letras das colunas (horizontal)
    char letras[LINHAS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Números das linhas (vertical)
    int numeros[COLUNAS] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int tabuleiro[LINHAS][COLUNAS] = {0};

   /*
    tabuleiro[6][6] = 3;
    tabuleiro[7][6] = 3;
    tabuleiro[8][6] = 3; */

    // Título do tabuleiro
    printf("   TABULEIRO BATALHA NAVAL\n   ");

    // Imprime letras das linhas
    for (int i = 0; i < LINHAS; i++) {
        printf("%c ", letras[i]);
    }
    printf("\n");

    //##### LOOP ALINHADO - ÍNICIO #####

    // Imprime números + interior do tabuleiro
    for (int i = 0; i < COLUNAS; i++) {
        printf("%2d ", numeros[i]);
        for (int j = 0; j < LINHAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
    // ADICONANDO NAVIO
    // HORIZONTAL
     int coluna = 2, linha = 1;
     for (int i = 0; i < 3; i++) {
     tabuleiro[coluna][linha + i] = 3;
    }
    // VERTICAL
     coluna = 6, linha = 6;
     for (int i = 0; i < 3; i++){
     tabuleiro[coluna + i][linha] = 3;
    }
    // DIAGONAL
     coluna = 1, linha = 9;
     for (int i = 0; i < 3; i++){
     tabuleiro[coluna + i][linha - i] = 3;
    }


        printf("\n");
    }


    return 0;
}
