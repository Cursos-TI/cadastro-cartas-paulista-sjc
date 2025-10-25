#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// -------------------------------
    // Declaração das variáveis - Carta 1
    // -------------------------------
    char estado1;              // Estado da cidade (A a H)
    char codigo1[4];           // Código da carta (ex: A01)
    char nomeCidade1[50];      // Nome da cidade
    int populacao1;            // População da cidade
    float area1;               // Área da cidade em km²
    float pib1;                // PIB em bilhões de reais
    int pontosTuristicos1;     // Número de pontos turísticos
    float densidade1;          // Densidade populacional
    float pibPerCapita1;       // PIB per capita

    // -------------------------------
    // Declaração das variáveis - Carta 2
    // -------------------------------
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // -------------------------------
    // Cadastro da primeira carta
    // -------------------------------
    printf("Cadastro da primeira carta:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);  // espaço antes do %c evita problema com ENTER
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // lê string com espaços
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da primeira carta
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB convertido para reais

    // -------------------------------
    // Cadastro da segunda carta
    // -------------------------------
    printf("\nCadastro da segunda carta:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da segunda carta
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // -------------------------------
    // Exibição da primeira carta
    // -------------------------------
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // -------------------------------
    // Exibição da segunda carta
    // -------------------------------
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0; // Fim do programa
}
