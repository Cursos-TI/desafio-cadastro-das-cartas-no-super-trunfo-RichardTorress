#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "pt_BR.UTF-8");
//Variaveis
    char estado1[2], estado2[2];
    char codigodacarta1[3], codigodacarta2[3];
    char nomedacidade1[20], nomedacidade2[20];
    int populacao1, populacao2;
    float areaemkm1, areaemkm2;
    float PIB1, PIB2;
    int pontoturistico1, pontoturistico2;
   //-------
// Primeira carta!
//interação com o usuário
    printf("BEM VINDO\n AO\n SUPER TRUNFO\n");
    printf("Vamos fazer sua primeira carta!\n");

    printf("Para começarmos digite a letra do seu estado de A a H\n");
    scanf(" %c",&estado1[0]);

    printf("Agora digite o código da sua carta. De 01 a 04\n");
    scanf(" %2s",codigodacarta1);

    
    printf("Digite o nome da cidade\n");
    scanf(" %s",&nomedacidade1);
   
    printf("Digite a população da sua cidade\n");
    scanf(" %d",&populacao1);

    printf("Digite a area em kilometro da sua cidade\n");
    scanf(" %f",&areaemkm1);

    printf("Digite o valor do produto interno bruto da sua cidade 'PIB'\n");
    scanf(" %f",&PIB1);

    printf("Digite quantos pontos turisticos sua cidade compõe\n");
    scanf(" %d", &pontoturistico1);
    printf("Parabéns você finalizou sua primeira carta\n");
//Segunda carta!
//interação com o usuário
    printf("Agora vamos para a segunda carta!\n");

    printf("Para continuarmos digite a letra do seu estado de A a H\n");
    scanf(" %c",&estado2[0]);

    printf("Agora digite o código da sua carta. De 01 a 04\n");
    scanf(" %2s",codigodacarta2);
    
    printf("Digite o nome da cidade\n");
    scanf(" %s",&nomedacidade2);
   
    printf("Digite a população da sua cidade\n");
    scanf(" %d",&populacao2);

    printf("Digite a area em kilometro da sua cidade\n");
    scanf(" %f",&areaemkm2);

    printf("Digite o valor do produto interno bruto da sua cidade 'PIB'\n");
    scanf(" %f",&PIB2);

    printf("Digite quantos pontos turisticos sua cidade compõe\n");
    scanf(" %d", &pontoturistico2);
    
//Retorno dos dados exposto na carta 1.
    printf("Carta: 1\n");
    printf("Estado: %c\n", estado1[0]);
    printf("CÃ³digo: %c%s\n", estado1[0], codigodacarta1);
    printf("Nome da Cidade:%s\n", nomedacidade1);
    printf("População: %d\n",populacao1);
    printf("Ãrea: %.2fkm²\n", areaemkm1);
    printf("PIB: %.2f\n", PIB1);
    printf("Numeros de Pontos turí­sticos: %d\n\n", pontoturistico1);
//Retorno dos dados exposto na carta 2.
    printf("Carta: 2\n");
    printf("Estado: %c\n", estado2[0]);
    printf("CÃ³digo: %c%s\n", estado2[0], codigodacarta2);
    printf("Nome da Cidade:%s\n", nomedacidade2);
    printf("População: %d\n",populacao2);
    printf("Ãrea: %.2fkm²\n", areaemkm2);
    printf("PIB: %.2f\n", PIB2);
    printf("Numeros de Pontos turí­sticos: %d\n", pontoturistico2);
  return 0;
}
