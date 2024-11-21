#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //Definição das variáveis utilizadas no programa. 
    char city_cod[4], city_name[30]; //Valor String (uma cadei de caracteres)
    float city_area, city_pib, densi_population, pib_per; //Pronto Flutuante
    int city_population, city_turistic_point; //inteiro

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Solicitando o input do usuário
    printf("Digite o nome da cidade:\n");
    scanf("%30[^\n]s",city_name);// Formatando a leitura dos dados (limita o armazenamento em 30)
                                
    printf("Digite o código da cidade (ex: A01):\n");
    scanf(" %3[^\n]s", city_cod);

    printf("Digite a população da cidade:\n");
    scanf(" %d",&city_population);

    printf("Digite a área da cidade:\n");
    scanf(" %f",&city_area);

    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &city_pib);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &city_turistic_point);

    // Calculos
    densi_population = (float) city_population / city_area;
    pib_per = (float) city_pib / city_population;
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nInformações da carta %s:\n\n\
     Nome: %s\n\
     Código: %s\n\
     População: %d\n\
     Área: %f\n\
     PIB: %f\n\
     Pontos turisticos: %d\n\
     Dencidade Populacional: %f\n\
     PIB Per Capita: %f",\
     city_name, city_name, city_cod, city_population, city_area, city_pib, city_turistic_point,\
     densi_population, pib_per);//Variáveis

    return 0;
}
