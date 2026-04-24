#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
#include <stdio.h>

int main() {

    // CARTA 1
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    float densidade1, pibPerCapita1;

    // CARTA 2
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    float densidade2, pibPerCapita2;

    // ===== CADASTRO CARTA 1 =====
    printf("Digite o nome da cidade 1: ");
    scanf("%s", cidade1);

    printf("Digite a populacao da cidade 1: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &pib1);

    // ===== CADASTRO CARTA 2 =====
    printf("\nDigite o nome da cidade 2: ");
    scanf("%s", cidade2);

    printf("Digite a populacao da cidade 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib2);

    // ===== CALCULOS =====
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // ===== COMPARAÇÃO (EX: POPULAÇÃO) =====
    printf("\nComparando Populacao:\n");

    printf("%s: %d habitantes\n", cidade1, populacao1);
    printf("%s: %d habitantes\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: %s venceu!\n", cidade1);
    } else {
        printf("Resultado: %s venceu!\n", cidade2);
    }

    return 0;h
}