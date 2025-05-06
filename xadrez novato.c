#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita (usando for)
    int i;
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (usando while)
    int j = 0;
    int casasBispo = 5;
    printf("\nMovimento do Bispo:\n");
    while (j < casasBispo) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
    int k = 0;
    int casasRainha = 8;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casasRainha);

    // Movimento do Cavalo: duas casas para baixo e uma para a esquerda (em "L")
    // Utilizando loops aninhados: um 'for' e um 'while'
    int passosBaixo = 2;
    int passosEsquerda = 1;
    int count = 0;

    printf("\nMovimento do Cavalo:\n");

    // Primeiro loop (externo): for para as duas casas para baixo
    for (i = 0; i < passosBaixo; i++) {
        printf("Baixo\n");
    }

    // Segundo loop (interno): while para uma casa à esquerda
    while (count < passosEsquerda) {
        printf("Esquerda\n");
        count++;
    }

    return 0;
}