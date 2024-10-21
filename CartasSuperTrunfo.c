 #include <stdio.h>
#include <stdlib.h>


int main (){


char EstadoA[50],EstadoB[20],EstadoC[20],EstadoD[20],EstadoE[20],EstadoF[20],EstadoG[20],EstadoH[20];
char Carta[5];
char Cidade1[20],Cidade2[20],Cidade3[20],Cidade4[20];
int Populacao;
float Area;
float densidade = Populacao/Area;
float PIB;
float PIB_per;
int Pontos_turisticos;


//explicação de como vai funcionar o Jogo!
printf("***Bem vindo ao Jogo Super tronfo***\n");
printf("\n");
printf("Nesse desafio, o tema do jogo será Países.\nAs cartas serão divididas por estados com cada estado tendo quatro cartas que representam diferentes cidades.\n");
printf("As cidades serão numeradas de 1 a 4\na combinação para gerar o codigo da carta vai ser a letra inicial do estado e o número da cidade,\n(por exemplo, A01, A02..., B01, B02)\n");
printf("\n");


//primeiro Estado a ser casdastrada pelo Usuario. A


printf("Primeira carta\n");
printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoA);
printf("Estado: %s\n",EstadoA);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %s",&Cidade1);
printf("cidade: %s\n",Cidade1);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoA, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade1, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da primeira Cidade!
printf("primeira cidade concluida com sucesso!\n");
printf("\n");


//Segunda cidade a ser casdastrada pelo Usuario.
printf("SEGUNDA CIDADE!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoA);
printf("Estado: %s\n",EstadoA);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade2);
fflush(stdin);
printf("cidade: %s\n",Cidade2);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoA, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade2, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Segunda cidade!
printf("Segunda Cidade concluida com sucesso!\n");
printf("\n");


//Terceira cidade a ser casdastrada pelo Usuario.
printf("Terceira Cidade!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoA);
printf("Estado: %s\n",EstadoA);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade3);
printf("cidade: %s\n",Cidade3);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoA, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade3, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Terceira cidade!
printf("Terceira cidade concluida com sucesso!\n");
printf("\n");


//Quarta cidade a ser casdastrada pelo Usuario.
printf("Quarta Cidade!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoA);
printf("Estado: %s\n",EstadoA);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade4);
printf("cidade: %s\n",Cidade4);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoA, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade4, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Quarta cidade!
printf("Quarta Cidade concluida com sucesso!\n");
printf("\n");
printf("Proxima Carta");
printf("\n");


//Segundo Estado a ser casdastrada pelo Usuario. B


printf("Segunda carta\n");
printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoB);
printf("Estado: %s\n",EstadoB);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %s",&Cidade1);
printf("cidade: %s\n",Cidade1);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoB, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade1, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da primeira Cidade!
printf("primeira cidade concluida com sucesso!\n");
printf("\n");


//Segunda cidade a ser casdastrada pelo Usuario.
printf("SEGUNDA CIDADE!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoB);
printf("Estado: %s\n",EstadoB);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade2);
fflush(stdin);
printf("cidade: %s\n",Cidade2);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoB, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade2, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Segunda cidade!
printf("Segunda Cidade concluida com sucesso!\n");
printf("\n");


//Terceira cidade a ser casdastrada pelo Usuario.
printf("Terceira Cidade!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoB);
printf("Estado: %s\n",EstadoB);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade3);
printf("cidade: %s\n",Cidade3);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoB, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade3, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Terceira cidade!
printf("Terceira cidade concluida com sucesso!\n");
printf("\n");


//Quarta cidade a ser casdastrada pelo Usuario.
printf("Quarta Cidade!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoB);
printf("Estado: %s\n",EstadoB);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade4);
printf("cidade: %s\n",Cidade4);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoB, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade4, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Quarta cidade!
printf("Quarta Cidade concluida com sucesso!\n");
printf("\n");
printf("Proxima Carta");
printf("\n");




//Terceiro Estado a ser casdastrado pelo Usuario. C


printf("Terceira carta\n");
printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoC);
printf("Estado: %s\n",EstadoC);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %s",&Cidade1);
printf("cidade: %s\n",Cidade1);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoC, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade1, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da primeira Cidade!
printf("primeira cidade concluida com sucesso!\n");
printf("\n");


//Segunda cidade a ser casdastrada pelo Usuario.
printf("SEGUNDA CIDADE!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoC);
printf("Estado: %s\n",EstadoC);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade2);
fflush(stdin);
printf("cidade: %s\n",Cidade2);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoC, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade2, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Segunda cidade!
printf("Segunda Cidade concluida com sucesso!\n");
printf("\n");


//Terceira cidade a ser casdastrada pelo Usuario.
printf("Terceira Cidade!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoC);
printf("Estado: %s\n",EstadoC);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade3);
printf("cidade: %s\n",Cidade3);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoC, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade3, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Terceira cidade!
printf("Terceira cidade concluida com sucesso!\n");
printf("\n");


//Quarta cidade a ser casdastrada pelo Usuario.
printf("Quarta Cidade!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoC);
printf("Estado: %s\n",EstadoC);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade4);
printf("cidade: %s\n",Cidade4);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoC, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade4, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Quarta cidade!
printf("Quarta Cidade concluida com sucesso!\n");
printf("\n");
printf("Proxima Carta");
printf("\n");


//Quarto Estado a ser casdastrada pelo Usuario. D


printf("Quarta carta\n");
printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoD);
printf("Estado: %s\n",EstadoD);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %s",&Cidade1);
printf("cidade: %s\n",Cidade1);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoD, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade1, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da primeira Cidade!
printf("primeira cidade concluida com sucesso!\n");
printf("\n");


//Segunda cidade a ser casdastrada pelo Usuario.
printf("SEGUNDA CIDADE!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoD);
printf("Estado: %s\n",EstadoD);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade2);
fflush(stdin);
printf("cidade: %s\n",Cidade2);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoD, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade2, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Segunda cidade!
printf("Segunda Cidade concluida com sucesso!\n");
printf("\n");


//Terceira cidade a ser casdastrada pelo Usuario.
printf("Terceira Cidade!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoD);
printf("Estado: %s\n",EstadoD);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade3);
printf("cidade: %s\n",Cidade3);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoD, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade3, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Terceira cidade!
printf("Terceira cidade concluida com sucesso!\n");
printf("\n");


//Quarta cidade a ser casdastrada pelo Usuario.
printf("Quarta Cidade!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoD);
printf("Estado: %s\n",EstadoD);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade4);
printf("cidade: %s\n",Cidade4);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoD, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade4, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Quarta cidade!
printf("Quarta Cidade concluida com sucesso!\n");
printf("\n");
printf("Proxima Carta");
printf("\n");




//Quinto Estado a ser casdastrada pelo Usuario. E


printf("Quinta carta\n");
printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoE);
printf("Estado: %s\n",EstadoE);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %s",&Cidade1);
printf("cidade: %s\n",Cidade1);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoE, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade1, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da primeira Cidade!
printf("primeira cidade concluida com sucesso!\n");
printf("\n");


//Sgunda cidade a ser casdastrada pelo Usuario.
printf("SEGUNDA CIDADE!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoE);
printf("Estado: %s\n",EstadoE);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade2);
fflush(stdin);
printf("cidade: %s\n",Cidade2);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoE, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade2, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Segunda cidade!
printf("Segunda Cidade concluida com sucesso!\n");
printf("\n");


//Terceira cidade a ser casdastrada pelo Usuario.
printf("Terceira Cidade!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoE);
printf("Estado: %s\n",EstadoE);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade3);
printf("cidade: %s\n",Cidade3);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoE, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade3, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Terceira cidade!
printf("Terceira cidade concluida com sucesso!\n");
printf("\n");


//Quarta cidade a ser casdastrada pelo Usuario.
printf("Quarta Cidade!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoE);
printf("Estado: %s\n",EstadoE);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade4);
printf("cidade: %s\n",Cidade4);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoE, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade4, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Quarta cidade!
printf("Quarta Cidade concluida com sucesso!\n");
printf("\n");
printf("Proxima Carta");
printf("\n");


//Sexto Estado a ser casdastrada pelo Usuario. F


printf("Primeira carta\n");
printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoF);
printf("Estado: %s\n",EstadoF);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %s",&Cidade1);
printf("cidade: %s\n",Cidade1);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoF, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade1, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da primeira Cidade!
printf("primeira cidade concluida com sucesso!\n");
printf("\n");


//Sgunda cidade a ser casdastrada pelo Usuario.
printf("SEGUNDA CIDADE!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoF);
printf("Estado: %s\n",EstadoF);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade2);
fflush(stdin);
printf("cidade: %s\n",Cidade2);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoF, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade2, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Segunda cidade!
printf("Segunda Cidade concluida com sucesso!\n");
printf("\n");


//Terceira cidade a ser casdastrada pelo Usuario.
printf("Terceira Cidade!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoF);
printf("Estado: %s\n",EstadoF);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade3);
printf("cidade: %s\n",Cidade3);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoF, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade3, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Terceira cidade!
printf("Terceira cidade concluida com sucesso!\n");
printf("\n");


//Quarta cidade a ser casdastrada pelo Usuario.
printf("Quarta Cidade!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoF);
printf("Estado: %s\n",EstadoF);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade4);
printf("cidade: %s\n",Cidade4);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoF, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade4, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Quarta cidade!
printf("Quarta Cidade concluida com sucesso!\n");
printf("\n");
printf("Proxima Carta");
printf("\n");


//Setimo Estado a ser casdastrada pelo Usuario. G


printf("Primeira carta\n");
printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoG);
printf("Estado: %s\n",EstadoG);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %s",&Cidade1);
printf("cidade: %s\n",Cidade1);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoG, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade1, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da primeira Cidade!
printf("primeira cidade concluida com sucesso!\n");
printf("\n");


//Sgunda cidade a ser casdastrada pelo Usuario.
printf("SEGUNDA CIDADE!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoG);
printf("Estado: %s\n",EstadoG);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade2);
fflush(stdin);
printf("cidade: %s\n",Cidade2);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoG, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade2, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Segunda cidade!
printf("Segunda Cidade concluida com sucesso!\n");
printf("\n");


//Terceira cidade a ser casdastrada pelo Usuario.
printf("Terceira Cidade!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoG);
printf("Estado: %s\n",EstadoG);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade3);
printf("cidade: %s\n",Cidade3);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoG, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade3, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Terceira cidade!
printf("Terceira cidade concluida com sucesso!\n");
printf("\n");


//Quarta cidade a ser casdastrada pelo Usuario.
printf("Quarta Cidade!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoG);
printf("Estado: %s\n",EstadoG);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade4);
printf("cidade: %s\n",Cidade4);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoG, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade4, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Quarta cidade!
printf("Quarta Cidade concluida com sucesso!\n");
printf("\n");
printf("Proxima Carta");
printf("\n");


//Oitavo Estado a ser casdastrada pelo Usuario. h


printf("Oitava carta\n");
printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoH);
printf("Estado: %s\n",EstadoH);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %s",&Cidade1);
printf("cidade: %s\n",Cidade1);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoH, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade1, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da primeira Cidade!
printf("primeira cidade concluida com sucesso!\n");
printf("\n");


//Sgunda cidade a ser casdastrada pelo Usuario.
printf("SEGUNDA CIDADE!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoH);
printf("Estado: %s\n",EstadoH);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade2);
fflush(stdin);
printf("cidade: %s\n",Cidade2);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoH, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade2, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Segunda cidade!
printf("Segunda Cidade concluida com sucesso!\n");
printf("\n");


//Terceira cidade a ser casdastrada pelo Usuario.
printf("Terceira Cidade!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoH);
printf("Estado: %s\n",EstadoH);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade3);
printf("cidade: %s\n",Cidade3);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoH, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade3, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Terceira cidade!
printf("Terceira cidade concluida com sucesso!\n");
printf("\n");


//Quarta cidade a ser casdastrada pelo Usuario.
printf("Quarta Cidade!\n");


printf("Digita um Estado:");
scanf(" %[^\n]s" ,&EstadoH);
printf("Estado: %s\n",EstadoH);
printf("\n");


printf("digite o codigo da carta:");
scanf(" %s",&Carta);
printf("Codigo da carta: %s\n", Carta);
printf("\n");


printf("Digite uma cidade quem tem no Estado informado a cima:");
scanf(" %[^\n]s",&Cidade4);
printf("cidade: %s\n",Cidade4);
printf("\n");




printf("Digite a população da Cidade:");
scanf(" %d",&Populacao);
fflush(stdin);
printf("população: %d\n", Populacao);
printf("\n");


printf("Qual a Area km² da cidade?");
scanf(" %f",&Area);
fflush(stdin);
printf("Area Km²: %f\n", Area);
printf("\n");


densidade=Populacao/Area;




printf("Digite o PIB:");
scanf("%f",&PIB);
printf("PIB:%f\n",PIB);
printf("\n");


PIB_per=PIB/Populacao;


printf("Quantos pontos turisticos tem na cidade?:");
scanf("%d",&Pontos_turisticos);
printf("Ponto turistico:%d\n",Pontos_turisticos);


printf("\n");
printf("Estado: %s\nCarta: %s \n",EstadoH, Carta);
printf("Cidade: %s\npopulação:%d\n",Cidade4, Populacao);
printf("Área km²: %f\n",Area);
printf("densidade populacional: %f\n",densidade);
printf("PIB:%f\n",PIB);
printf("PIB per capita:%f\n",PIB_per);
printf("Ponto turistico:%d\n",Pontos_turisticos);
printf("\n");


//confirmação do cadrasto da Quarta cidade!
printf("Quarta Cidade concluida com sucesso!\n");






return 0;


}

