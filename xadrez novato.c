#include <stdio.h>

// Função recursiva para o movimento da Torre: Direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento do Bispo com loops aninhados
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes == 0) return;

    // Loop externo: Vertical (Cima)
    for (int v = 0; v < 1; v++) {
        // Loop interno: Horizontal (Direita)
        for (int h = 0; h < 1; h++) {
            printf("Cima Direita\n");
        }
    }

    moverBispoRecursivo(casasRestantes - 1);
}

// Função recursiva para o movimento da Rainha: Esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função para o movimento do Cavalo: 2 para cima, 1 para direita (em "L")
// Usando loops aninhados com múltiplas variáveis e controle de fluxo
void moverCavalo() {
    int movCima = 2;
    int movDireita = 1;

    printf("\nMovimento do Cavalo:\n");

    for (int i = 0; i < movCima + 1; i++) {
        for (int j = 0; j < movDireita + 1; j++) {
            if (i < movCima) {
                printf("Cima\n");
                continue; // Pula para o próximo passo vertical
            }
            if (j < movDireita) {
                printf("Direita\n");
                break; // Após um movimento à direita, sai do loop interno
            }
        }
    }
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Movimento do Bispo com recursão + loops aninhados
    printf("\nMovimento do Bispo:\n");
    moverBispoRecursivo(casasBispo);

    // Movimento da Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Movimento do Cavalo com loops aninhados e controle de fluxo
    moverCavalo();

    return 0;
}