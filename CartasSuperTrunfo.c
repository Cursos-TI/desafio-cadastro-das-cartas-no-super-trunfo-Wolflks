
 #include <stdio.h>
#include<stdlib.h>

int main (){

char Estado[50]= "Rio De janeiro";
char Carta [100]="A01";
char Cidade[100]="petrópolis";
float Populacao=278.881;
float Area =791.144;
float PIB=15.70;
int Pontos_turisticos=15; 


printf("Olá, bem vindo ao jogo, você pode escolher uma carta para inicar:\n");

printf("\n");

printf("carta R01\n");

printf("\n");
printf("Estado: Rio de janeiro\n");
printf("Carta: R01\n");
printf("Cidade:Petópolis\n");
printf("população:278.881\n");
printf("Area Km²:791.144\n");
printf("PIB: 15.70\n");
printf("Pontos turisticos:15\n");

printf("\n");

printf("carta R02\n");

printf("Estado: Rio de janeiro\n");
printf("Carta: R02\n");
printf("Cidade:Nova Iguaçu\n");
printf("população:843.046\n");
printf("Area Km²:524.04\n");
printf("PIB: 21.559.06\n");
printf("Pontos turisticos:15\n");

printf("\n");
printf("carta R03\n");

printf("Estado: Rio de janeiro\n");
printf("Carta: R03\n");
printf("Cidade:Angra dos Reis\n");
printf("população:179.120\n");
printf("Area Km²:813.420\n");
printf("PIB: 53.262.55\n");
printf("Pontos turisticos:20\n");

scanf("%c", &Carta);
   return 0;
}
