#include <stdio.h>

int main (){
int carta = 1;
char estado = 'A';
char codigo[19]= "A01";
char cidade[20] = "Ribeirão Preto";
float população = 700.000;
float area = 25.000;
float pib = 1.92;
int turismo = 8;
float densidade = 8101.19;
float PIB = 56749;
float divisao1, divisao2;


printf ("Informe os dados da %dª carta:\n", carta);

printf ("Digite o estado:\n");
scanf ("%c", &estado);

printf ("Digite o código da carta:\n");
scanf ("%s", &codigo);

printf ("Digite o nome da cidade:\n");
fflush(stdin);
scanf (" %20[^\n]", &cidade);

printf ("Digite a população:\n");
scanf ("%f", &população);

printf ("DIgite a area:\n");
scanf (" %f", &area);

printf ("Digite o PIB:\n");
scanf ("%f", &pib);

printf ("Quantidade de pontos turísticos:\n");
scanf ("%d", &turismo);

printf ("\n");

printf ("Carta cadastrada com sucesso!\n\n");

printf ("Informações da carta:\n Estado: %c\n Código: %s\n Nome: %s\n População: %.3f habitantes\n Área: %.1f Km²\n PIB: %.1f bilhões de reais\n Pontos Turisticos: %d\n" , estado, codigo, cidade, população, area, pib, turismo);

divisao1 = (float) pib / população;  //Float foi utilizado para forçar (casting) o valor em ponto flutuante.    
divisao2 = (float) população / area;

printf ("PIB per capita: %.4f\n", divisao1);

printf ("Densidade: %.4f\n", divisao2);








}


