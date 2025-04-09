#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[100], cidade2[100];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;

    // Entrada dos dados para a Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", cidade1);  // Leitura de string com espaços
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Entrada dos dados para a Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", cidade2);  // Leitura de string com espaços
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos de Densidade Populacional e PIB per Capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_per_capita1 = pib1 * 1000000000 / populacao1;  // PIB em reais
    pib_per_capita2 = pib2 * 1000000000 / populacao2;  // PIB em reais

    // Comparação com base no atributo População
    printf("\nComparação de cartas (Atributo: População):\n");

    printf("Carta 1 - %s (%c): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    // Comparação com base no atributo Área
    printf("\nComparação de cartas (Atributo: Área):\n");

    printf("Carta 1 - %s (%c): %.2f km²\n", cidade1, estado1, area1);
    printf("Carta 2 - %s (%c): %.2f km²\n", cidade2, estado2, area2);

    if (area1 > area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (area2 > area1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    // Comparação com base no atributo PIB
    printf("\nComparação de cartas (Atributo: PIB):\n");

    printf("Carta 1 - %s (%c): %.2f bilhões de reais\n", cidade1, estado1, pib1);
    printf("Carta 2 - %s (%c): %.2f bilhões de reais\n", cidade2, estado2, pib2);

    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pib2 > pib1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    // Comparação com base no atributo Densidade Populacional
    printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");

    printf("Carta 1 - %s (%c): %.2f habitantes/km²\n", cidade1, estado1, densidade1);
    printf("Carta 2 - %s (%c): %.2f habitantes/km²\n", cidade2, estado2, densidade2);

    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);  // Menor densidade vence
    } else if (densidade2 < densidade1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);  // Menor densidade vence
    } else {
        printf("Resultado: Empate!\n");
    }

    // Comparação com base no atributo PIB per capita
    printf("\nComparação de cartas (Atributo: PIB per capita):\n");

    printf("Carta 1 - %s (%c): %.2f reais\n", cidade1, estado1, pib_per_capita1);
    printf("Carta 2 - %s (%c): %.2f reais\n", cidade2, estado2, pib_per_capita2);

    if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
