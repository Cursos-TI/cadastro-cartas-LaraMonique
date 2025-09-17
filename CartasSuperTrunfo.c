#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

char estado1, estado2;
char codigo1[4], codigo2[4];
char cidade1[50], cidade2[50];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontosTuristicos1, pontosTuristicos2;

  // Área para entrada de dados carta 1

printf("Cadastro da Carta 1:\n");
printf("Digite o Estado (A-H): ");
scanf(" %c", &estado1);

printf("Digite o Codigo da Carta (ex: A01): ");
scanf("%s", codigo1);

printf("Digite o Nome da Cidade: ");
scanf(" %[^\n]", cidade1);

printf("Digite a Populacao: ");
scanf("%d", &populacao1);

printf("Digite a Area (km²): ");
scanf("%f", &area1);

printf("Digite o PIB (em bilhoes): ");
scanf("%f", &pib1);

printf("Digite o Numero de Pontos Turisticos: ");
scanf("%d", &pontosTuristicos1);

// area de carta 2

printf("\nCadastro da Carta 2:\n");
printf("Digite o Estado (A-H): ");
scanf(" %c", &estado2);

printf("Digite o Codigo da Carta (ex: B02): ");
scanf("%s", codigo2);

printf("Digite o Nome da Cidade: ");
scanf(" %[^\n]", cidade2);

printf("Digite a Populacao: ");
scanf("%d", &populacao2);

printf("Digite a Area (km²): ");
scanf("%f", &area2);

printf("Digite o PIB (em bilhoes): ");
scanf("%f", &pib2);

printf("Digite o Numero de Pontos Turisticos: ");
scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade

printf("\n===== Cartas Cadastradas =====\n");

printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %.2f km²\n", area1);
printf("PIB: %.2f bilhoes de reais\n", pib1);
printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f km²\n", area2);
printf("PIB: %.2f bilhoes de reais\n", pib2);
printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);



return 0;
} 
