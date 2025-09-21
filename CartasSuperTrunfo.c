//Nivel Aventureiro
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Variáveis separadas para cada atributo da cidade.
    // Atributos: estado, código da carta (), nome da cidade, população, área, PIB, número de pontos turísticos.

    char estado1,estado2; //uma letra, de A a H, respresentando um dos oito estados 
    char codigo_carta1[4]; //letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char codigo_carta2[4]; //letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char nome_cidade1[50], nome_cidade2[50]; //nome da cidade, até 50 caracteres
    int populacao1,populacao2; //população da cidade, um número inteiro 
    float area1,area2; //área da cidade em km², um número real
    float pib1,pib2; //PIB da cidade em milhões de reais, um número real
    int numero_pontos_turisticos1,numero_pontos_turisticos2; //número de pontos turísticos da cidade, um número inteiro
    float densi_pop1,densi_pop2; //densidade populacional da cidade, um número real
    float pib_per_capita1,pib_per_capita2; //PIB per capita da cidade, um número real

    // Cadastro das Cartas:
    //Carta 1: Solicitar ao usuário que insira as informações de uma cidade.
    // Solicitar ao usuário que insira as informações de cada cidade
    printf("Digite o estado utilizando uma letra maiúscula entre A e H:\n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (letra do estado seguida de um número de 01 a 04):\n");
    scanf("%3s", codigo_carta1);
    printf("Digite o nome da cidade (até 50 caracteres):\n");
    scanf(" %[^\n]", nome_cidade1); // Lê até 50 caracteres, incluindo espaços
    printf("Digite a população da cidade (número inteiro):\n");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade em km² (número real):\n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade em milhões de reais (número real):\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade (número inteiro):\n");
    scanf("%d", &numero_pontos_turisticos1);

    //Carta 2: Repetir o processo para uma segunda cidade, utilizando as mesmas variáveis.
    printf("\nDigite novamente as informações de outra cidade:\n");
    printf("Digite o estado utilizando uma letra maiúscula entre A e H:\n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (letra do estado, maiúscula, seguida de um número de 01 a 04):\n");
    scanf("%3s", codigo_carta2);
    printf("Digite o nome da cidade (até 50 caracteres):\n");
    scanf(" %[^\n]", nome_cidade2); // Lê até 50 caracteres, incluindo espaços
    printf("Digite a população da cidade (número inteiro):\n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade em km² (número real):\n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade em milhões de reais (número real):\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade (número inteiro):\n");
    scanf("%d", &numero_pontos_turisticos2); 

    // Exibição dos Dados das Cartas:
    // Exibindo os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nDados da Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos1); 
    printf("Densidade Populacional: %.2f habitantes/km²\n", populacao1/area1);
    printf("PIB per Capita: %.2f mil reais\n", (pib1*1000)/populacao1); 

    printf("\nDados da Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos2); 
    printf("Densidade Populacional: %.2f habitantes/km²\n", populacao2/area2);
    printf("PIB per Capita: %.2f mil reais\n", (pib2*1000)/populacao2);

    return 0;
}
