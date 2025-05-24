#include <stdio.h>

int main() {
    int campo [10][10];
    int navioHorizontal[3];
    int navioVertical[3];
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            campo[i][j] = 0;
        }
    }

    // posiciona o navio na horizontal
    int linhaHorizontal = 2;
    int colunaHorizontal = 4;
    
    for (int i = 0; i < 3; i++) {
        navioHorizontal[i] = colunaHorizontal + i;
        campo[linhaHorizontal][navioHorizontal[i]] = 3;
    } 

    // posiciona o navio na vertical
    int colunaVertical = 7;
    int linhaVertical = 5;

    for (int i = 0; i < 3; i++) {
        navioVertical[i] = linhaVertical + i;
        campo[navioVertical[i]][colunaVertical] = 3;
    }


    // imprimir o campo
    printf("      ");
    for(char letra = 'A'; letra <= 'J'; letra++) {
        printf("%c ", letra);
    }

    printf("\n\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d    ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", campo[i][j]);
        }

        printf("\n");
    }
    

    return 0;


}