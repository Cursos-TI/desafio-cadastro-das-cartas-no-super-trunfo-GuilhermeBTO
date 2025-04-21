#include <stdio.h>
int main() {
    
    // Dados para a Carta 1 
    char estado1[] = "Amazonia";
    char codigo_carta1[] = "A01";
    char nome_cidade1[] = "Manaus";
    int populacao1 = 2064000;
    float area1 = 11401;           // em km2
    float pib1 = 103.281;          // em bilhoes de reais
    int pontos_turisticos1 = 30;

    // Dados para a Carta 2 
    char estado2[] = "Para";
    char codigo_carta2[] = "B02";
    char nome_cidade2[] = "Belem";
    int populacao2 = 1398531;
    float area2 = 1059;           // em km    
    float pib2 = 33.4;            // em bilhoes de reais
    int pontos_turisticos2 = 21;

    // calcular a densidade populacional da carta 1:
    float densidade_populacional1 = (float) populacao1 / area1;
   
    // calcular o PIB per capita da carta 1:
    float pib_per_capita1 = pib1 * 1000000000 / populacao1;

    // calcular a densidade populacional da carta 2:
    float densidade_populacional2 = (float) populacao2 / area2;

    // calcular o PIB per capita da carta 2:
    float pib_per_capita2 = pib2 * 1000000000 / populacao2;

    printf("\n"); // Linha em branco para separar

    // Calculo do Super poder
    float Super_Poder1 = (float) populacao1 + area1 + pib1 + (float) pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1 );
    float Super_Poder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2 );

    printf("COMPARACAO DAS CARTAS: \n");
    printf("\n"); // Linha em branco para separar
    
    // Resultado (1) para Carta 1.
    // Resultado (0) para Carta 2.

    printf("Populacao: Carta 1 Venceu! (%d) \n", populacao1 > populacao2);
    printf("Area: Carta 1 Venceu! (%d) \n", area1 > area2);
    printf("PIB: Carta 1 Venceu! (%d) \n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu! (%d) \n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional (vence a menor densidade): Carta 1 venceu! (%d) \n", densidade_populacional1 > densidade_populacional2);
    printf("PIB per capita: Carta 1 Venceu! (%d) \n", pib_per_capita1 > pib_per_capita2);
    printf("Super poder: Carta 1 Venceu! (%d) \n", Super_Poder1 > Super_Poder2);
    printf("\n"); // Linha em branco para separar

    return 0;
}