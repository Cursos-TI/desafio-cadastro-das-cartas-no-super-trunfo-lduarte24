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
     char pais;
     char codigoEstado[20];
     char nomeCidade[100];
     char nomeEstado[100];
     float populacao;
     float areaTerritorial;
     float pib;
     int pontosTuristicos;



    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
     
     
     printf("Insira um País\n");
     scanf("%s", &pais);
     printf("Insira um Estado:\n");
     scanf("%s", &nomeEstado);
     printf("Escolha um código de A-H;\n");
     scanf("%s", &codigoEstado);
     printf("Insira uma cidade:\n");
     scanf("%s", &nomeCidade);
     printf("Escolha um código de 1-4;\n");
     scanf("%d", &codigoCidade);
     printf("População existente:\n");
     scanf("%f", &populacao);
     printf("Extensão Territórial:\n");
     scanf("%f", &areaTerritorial);
     printf("PIB:\n");
     scanf("%f", &pib);
     printf("Número de Pontos Turísticos:\n");
     scanf("%d", &pontosTuristicos);




    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
