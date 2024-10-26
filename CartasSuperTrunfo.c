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
     char codigoEstado[2];
     char nomeCidade[20];
     char nomeEstado[20];
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


    printf("País 1:%s\n", pais);
    printf("Estado 1:%s\n", nomeEstado);
    printf("Código do Estado 1:%s\n", codigoEstado);
    printf("Cidade 1:%s\n", nomeCidade);
    printf("Código da Cidade 1:%d\n", codigoCidade);
    printf("População existente:%f\n", populacao);
    printf("Extensão Territorial:%f\n", areaTerritorial);
    printf("PIB:%f\n", pib);
    printf("Número de pontos turísticos:%d\n", pontosTuristicos);
    return 0;
}

