#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
    char estado1,nomeCidade1[20],codigo1[3];
    int populacao1,pontosTuristicos1;
    float area1,pib1;
    
    char estado2,nomeCidade2[20],codigo2[3];
    int populacao2,pontosTuristicos2;
    float area2,pib2;

  // Área para entrada de dados

    printf("        Bem Vindo ao Super Trunfo Países\n  ");
    printf("Vamos cadastrar a carta 1 \n");
    printf("Digite uma letra de A a H representando seu estado: \n ");
    scanf("%c" ,&estado1);
    printf("Digite código da carta, letra do estado mais numero de 01 a 04: \n");
    scanf("%s",&codigo1);
    printf("Digite o nome da sua cidade: \n");
    scanf("%s",&nomeCidade1);
    printf("Digite a população da sua cidade: \n");
    scanf("%s",&nomeCidade1);
    printf("Digite a area da sua Cidade em Km²: \n ");
    scanf("%f",&area1),
    printf("Digite o PIB da sua cidade \n");
    scanf("%f",&pib1);
    printf("Digite o número de pontos turísticos da sua cidade:  \n ");
    scanf("%d,&",pontosTuristicos1);

    
    printf("Agora vamos cadastrar a carta 2 \n");
    printf("Digite uma letra de A a H representando seu estado: \n ");
    scanf("%c" ,&estado2);
    printf("Digite código da carta, letra do estado mais numero de 01 a 04: \n");
    scanf("%s",&codigo2);
    printf("Digite o nome da sua cidade: \n");
    scanf("%s",&nomeCidade2);
    printf("Digite a população da sua cidade: \n");
    scanf("%s",&nomeCidade2);
    printf("Digite a area da sua Cidade em Km²: \n ");
    scanf("%f",&area2),
    printf("Digite o PIB da sua cidade \n");
    scanf("%f",&pib2);
    printf("Digite o número de pontos turísticos da sua cidade:  \n ");
    scanf("%d",&pontosTuristicos2);

    
  // Área para exibição dos dados da cidade

return 0;
} 
