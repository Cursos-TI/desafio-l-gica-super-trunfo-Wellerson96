#include <stdio.h>

int main(){

    char estado = 'A';
    char codigo[10] = "A01";
    char cidade[20] = "Ribeirão-Preto";
    int populacao = 698642;
    float area = 650.9;
    double pib = 38764088492.22;
    int turismo = 39;
    float densidade;
    double PIB = (float) pib / populacao; // PIB per capita.

    // Variáveis cadastradas e valores inicializados.

    char estado1;
    char codigo1[10];
    char cidade1[20];
    int populacao1;
    float area1;
    double pib1 = 22463442818.96;
    int turismo1;
    float densidade1;
    double PIB1 = (float) pib1 / populacao1; // PIB per capita.

    // Variáveis criadas para assumirem os respectivos valores da segunda carta.

    printf("***BEM VINDO AO JOGO SUPER TRUNFO TEMA PAÍSES!!***\n\n");

    //Apresentação e algumas instruções sobre o jogo.

    printf("Nesse primeiro momento iremos realizar o cadastro das cartas com as seguintes informações:\n");
    printf("Estado. Caracterizado por uma letra de A a H.\nCódigo da carta. Contendo a letra do estado seguido de um numero de 01 a 04.\n");
    printf("Nome da cidade, população, área em Km², PIB e quantidade de pontos turísticos.\n\n");

    printf("Preparado? Vamos começar!!\n\n");

    //Nesse passo o usuário irá digitar as informações das cartas.

    printf("Por favor, digite os dados da 1ª carta:\n");

    printf("Digite a letra do estado:\n");
    scanf("%c", &estado);

    printf("Digite agora o código da carta:\n");
    scanf("%s", &codigo);

    printf("Nome da cidade:\n");
    scanf("%s", &cidade);

    printf("População (Sem pontos ou vírgulas):\n");
    scanf("%d", &populacao);

    printf("Área:\n");
    scanf("%f", &area);

    printf("PIB:\n");
    scanf("%f", &pib);

    printf("Quantidade de pontos turísticos:\n");
    scanf("%d", &turismo);

    printf("\n");

    //Agora serão usadas as informações digitadas para que o sistema efetue o calculo da densidade e PIB per capita.

        densidade = (float) populacao / area; // Cast utilizado para forçar uma mudança da váriavel int para float.
        PIB = (float) pib / populacao; // PIB per capita.

        printf("Carta cadastrada com sucesso!!\n\n");

        printf("Informações da carta:\n");

        printf("Estado: %c\n", estado);
        printf("Código da carta: %s\n", codigo);
        printf("Nome da cidade: %s\n", cidade);
        printf("População: %d habitantes\n", populacao);
        printf("Área: %.1f Km²\n", area);
        printf("PIB: R$ %.2f\n", pib);
        printf("Pontos turísticos: %d\n", turismo);
        printf("Densidade populacional: %.2f habitantes por Km²\n", densidade);
        printf("PIB per capita: R$ %.2f\n", PIB);

        printf("\n");

     printf("Por favor, digite os dados da 2ª carta:\n");

    printf("Digite a letra do estado:\n");
    scanf(" %c", &estado1);

    printf("Digite agora o código da carta:\n");
    scanf("%s", &codigo1);

    printf("Nome da cidade:\n");
    scanf("%s", &cidade1);

    printf("População (Sem pontos ou vírgulas):\n");
    scanf("%d", &populacao1);

    printf("Área:\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos:\n");
    scanf("%d", &turismo1);

    printf("\n");

        densidade1 = (float) populacao1 / area1; // Cast utilizado para forçar uma mudança da váriavel int para float.
        PIB1 = (float) pib1 / populacao1; // PIB per capita.

        printf("Carta cadastrada com sucesso!!\n\n");

        printf("Informações da carta:\n");

        printf("Estado: %c\n", estado1);
        printf("Código da carta: %s\n", codigo1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %d habitantes\n", populacao1);
        printf("Área: %.1f Km²\n", area1);
        printf("PIB: R$ %.2f\n", pib1);
        printf("Pontos turísticos: %d\n", turismo1);
        printf("Densidade populacional: %.2f habitantes por Km²\n", densidade1);
        printf("PIB per capita: R$ %.2f\n", PIB1);

        printf("\n");

printf("Pronto! Agora que foram efetuados os cadastros das cartas iremos fazer a comparação das características para ver qual a carta vencedora.\n\n");

printf("Se o resultado for 1 a primeira carta vence, se for 0, a segunda.\n\n");

        printf("População: %s > %s = %d\n", cidade, cidade1, populacao > populacao1);
        printf("Área: %s > %s = %d\n", cidade, cidade1, area > area1);
        printf("PIB: %s > %s = %d\n", cidade, cidade1, pib > pib1);
        printf("Pontos túristicos: %s > %s = %d\n", cidade, cidade1, turismo > turismo1);
        printf("Densidade: %s < %s = %d\n", cidade, cidade1, densidade < densidade1);
        printf("PIB per capita: %s > %s = %d\n\n", cidade, cidade1, PIB > PIB1);

printf("Agora será calculado o superpoder de cada carta, que se refere a soma de todos os seus atributos.\n\n");

double superpoder, superpoder1; // Variável criada para efetuar o calculo do superpoder.

superpoder = populacao + area + pib + turismo + densidade + PIB;
superpoder1 = populacao1 + area1 + pib1 + turismo1 + densidade1 + PIB1;

printf("%s = %.2f\n", cidade, superpoder);
printf("%s = %.2f\n\n", cidade1, superpoder1);

        printf("Superpoder: %s > %s = %d\n", cidade, cidade1, superpoder > superpoder1);




return 0;



}