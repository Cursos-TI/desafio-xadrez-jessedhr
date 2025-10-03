#include <stdio.h>

// Definição de constantes para as quantidades de movimentos das peças básicas
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_RAINHA 8

// Definição de constantes para o movimento do Cavalo
#define CAVALO_VERTICAL 2   // Duas casas para Baixo
#define CAVALO_HORIZONTAL 1 // Uma casa para a Esquerda

int main() {
    printf("--- Movimentando Peças de Xadrez ---\n\n");


    // 1. Movimento da TORRE: 5 casas para a Direita (Usando for)

    printf("==========================================\n");
    printf("1. Torre: Movendo %d casas para a Direita\n", MOVIMENTOS_TORRE);
    printf("==========================================\n");

    for (int i = 1; i <= MOVIMENTOS_TORRE; i++) {
        printf("Casa %d: Direita\n", i);
    }
    printf("\n");


    // 2. Movimento do BISPO: 5 casas na Diagonal (Cima e Direita) (Usando while)

    printf("===================================================\n");
    printf("2. Bispo: Movendo %d casas na Diagonal Cima/Direita\n", MOVIMENTOS_BISPO);
    printf("===================================================\n");

    int contador_bispo = 1;

    while (contador_bispo <= MOVIMENTOS_BISPO) {
        printf("Casa %d: Cima Direita\n", contador_bispo);
        contador_bispo++;
    }
    printf("\n");


    // 3. Movimento da RAINHA: 8 casas para a Esquerda (Usando do-while)

    printf("==========================================\n");
    printf("3. Rainha: Movendo %d casas para a Esquerda\n", MOVIMENTOS_RAINHA);
    printf("==========================================\n");

    int contador_rainha = 1;

    do {
        printf("Casa %d: Esquerda\n", contador_rainha);
        contador_rainha++;
    } while (contador_rainha <= MOVIMENTOS_RAINHA);
    
    printf("\n");


    // 4. Movimento do CAVALO: 2 para Baixo, 1 para Esquerda (Usando for ANINHADO com while)
    
    printf("===================================================\n");
    printf("4. Cavalo: Movimento em L\n");
    printf("===================================================\n");

    
    // Simula o movimento de '2' casas (o longo do L) - Baixo
    printf("Inicio do Movimento em L:\n");
    for (int i = 1; i <= CAVALO_VERTICAL; i++) {
        printf("  Etapa Vertical %d: Baixo\n", i);
    }
    
    // Simula o movimento de '1' casa (o curto do L) - Esquerda
    int j = 1;
    while (j <= CAVALO_HORIZONTAL) {
        printf("  Etapa Horizontal %d: Esquerda\n", j);
        j++;
    }

    printf("Fim do Movimento em L.\n");
    printf("\n--- Fim das Movimentações ---\n");

    return 0;
}