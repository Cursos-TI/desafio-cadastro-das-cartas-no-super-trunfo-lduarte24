#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

printf("DESAFIO SUPER TRUNFO\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int codigoCidade;
     char nomeCidade[50];
     double populacao;
     double areaTerritorial;
     double pib;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
     printf("Digite o código da cidade:\n");
     scanf("%d", &codigoCidade);
     printf("O código da cidade é: %d\n", codigoCidade);
    printf("Digite o nome da cidade:\n");
     scanf("%s", &nomeCidade);
     printf("O nome da cidade é: %s\n", nomeCidade);
     printf("População residente:\n");
     scanf("%f", &populacao);
     printf("O número da população é: %f\n", populacao);
     printf("Extensão Territórial:\n");
     scanf("%f", &areaTerritorial);
     printf("A extensão territorial é: %f\n", areaTerritorial);
     printf("PIB:\n");
     scanf("%f", &pib);
     printf("O PIB é: %f\n", pib);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
