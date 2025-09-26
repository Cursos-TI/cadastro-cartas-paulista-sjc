#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

    // =============================
    // DECLARAÇÃO DAS VARIÁVEIS
    // =============================

    // Variáveis da Carta 1
    char estado1;                     // Estado da carta (letra de A até H)
    char codigo1[4];                  // Código da carta (exemplo: A01). 3 caracteres + '\0'
    char nomeCidade1[50];             // Nome da cidade (até 49 letras + '\0')
    int populacao1;                   // População da cidade (número inteiro)
    float area1;                      // Área em km² (número decimal)
    float pib1;                       // PIB em bilhões (número decimal)
    int pontosTuristicos1;            // Quantidade de pontos turísticos (número inteiro)

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ===============================
    // LEITURA DOS DADOS DA CARTA 1
    // ===============================

    printf("Cadastro da Carta 1:\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);  
    // " %c" -> espaço antes do %c evita que ENTER fique guardado no buffer

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);  
    // %s lê uma string (sem espaços). Ex: A01

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);  
    // %[^\n] -> lê até o ENTER, aceitando nomes com espaço, ex: "Rio de Janeiro"

    printf("Digite a População: ");
    scanf("%d", &populacao1);  

    printf("Digite a Área em km²: ");
    scanf("%f", &area1);  

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib1);  

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);  

    // ===============================
    // LEITURA DOS DADOS DA CARTA 2
    // ===============================

    printf("\nCadastro da Carta 2:\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===============================
    // SAÍDA DOS DADOS DA CARTA 1
    // ===============================

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);  
    // %.2f -> mostra o número decimal com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // ===============================
    // SAÍDA DOS DADOS DA CARTA 2
    // ===============================
    
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    // Final do programa

return 0;
} 
