#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    char estado1;
    char codigo1;
    char cidade1;
    float populacao1;
    float area1;
    float pib1;
    int turismo1;

    char estado2;
    char codigo2;
    char cidade2;
    float populacao2;
    float area2;
    float pib2;
    int turismo2;

    int opcao;

    printf("Seja bem vindo ao jogo Super Trunfo Países!!\n\n");
    printf("Por favor, escolha uma opção:\n");
    printf("1. Iniciar jogo\n");
    printf("2. Regras\n");
    printf("Escolha:\n");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
        printf("Iniciando jogo...\n\n");
        printf("Insira os dados da 1ª carta:\n");

        printf("Digite o estado: \n");
        scanf("%s", &estado1);

        printf("Digite o código da carta: \n");
        scanf("%s", &codigo1);

        printf("Digite o nome da cidade: \n");
        scanf("%s", &cidade1);

        printf("Digite a população: \n");
        scanf("%f", populacao1);

        printf("Digite a área: \n");
        scanf("%f", &area1);

        printf("Digite o PIB: \n");
        scanf("%f", &pib1);

        printf("Digite a quantidade de pontos turísticos: \n");
        scanf("%d", &turismo1);

        printf("Carta cadastrada com sucesso!!\n\n");
        printf("Informações da carta:\n");

        printf("Estado: %s", estado1);







    }

    

    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
