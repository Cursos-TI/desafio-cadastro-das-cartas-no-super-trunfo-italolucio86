#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste italo

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    int codigo; // Código da carta (ex: A01, B02)
    char nome[50]; // Nome da cidade
    int populacao; // População da cidade
    float area; // Área da cidade
    float pib; // PIB da cidade
    int pontos_turisticos; // Número de pontos turísticos da cidade Carta;

    printf("Digite o codigo da carta A01 a B02: ");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos);    
    
    return 0;
}
