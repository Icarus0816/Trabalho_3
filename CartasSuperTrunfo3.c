#include<stdio.h>

int main(){

unsigned int  Populacao1, Populacao2, PontosT1, PontosT2;
float Area1, Area2, Pib1, Pib2, Densidade1, Densidade2, Soma2Atributos1, Soma2Atributos2; 
char Estado1[20] = "A01", Estado2[20] = "A02", NomeCidade1[20] = "Recife", NomeCidade2[20] = "Fortaleza";
//Declara o valor das Váriaveis para focar somente no Menu nesse código

Populacao1 = 3700000;
Area1 = 218435;
Pib1 = 135000000000;
Densidade1 = Populacao1 / Area1;
PontosT1 = 14;

Populacao2 = 2428678;
Area2 = 312353;
Pib2 = 73436128432;
Densidade2 = Populacao2 / Area2;
PontosT2 = 12;

//Menu
int opcao, opacao2;
printf("Comparação de Atributos!!!\n");
printf("1. Nome da Cidade\n 2. Populção\n 3. Área\n 4. PIB\n");
printf("5. Pontos Turísticos\n 6. Densidade demográfica\n");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
    printf("Carta 1: %s Cidade: %s \n", Estado1, NomeCidade1);
    printf("Carta 2: %s Cidade: %s", Estado2, NomeCidade2);
    break;
case 2: //Compara a População
    printf("\nCidade 1: %s Cidade 2: %s", NomeCidade1, NomeCidade2 );
    printf("\nPopulação");
    printf("\nCarta 1: %i Carta 2: %i\n", Populacao1, Populacao2);
    printf("Escolha o segundo a tributo!!!");
    scanf("%d", &opacao2);
    switch(opacao2){ //swith dentro do switch para escolher o segundo atributo
    case 2:    
        printf("Atributo ja escolhido");
    break;
    case 3: // População + Area
    printf("\nÁrea");
    printf("\nCarta 1: %.2f Carta 2: %.2f \n", Area1, Area2);
    Soma2Atributos1 = (float) Populacao1 + Area1;
    Soma2Atributos2 = (float)Populacao2 + Populacao2;
    printf("A soma dos atributos é: \n Carta 1: %.2f \n Carta 2: %.2f\n", Soma2Atributos1, Soma2Atributos2);
    if((Area1>Area2 && Populacao1>Populacao2) && Soma2Atributos1 > Soma2Atributos2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(Area1 == Area2 && Populacao1 == Populacao2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
    case 4: //População + PIB
    
    Pib1 = Pib1 / 1000000000; // resumir para tornar mais facil a vizualização 
    Pib2 = Pib2 / 1000000000;
    printf("\nPIB");
    printf("\nCarta 1: %.2f Bilhões Carta 2: %.2f Bilhões \n", Pib1, Pib2);
    Pib1 = Pib1 * 1000000000;
    Pib2 = Pib2 * 1000000000;
    Soma2Atributos1 = (float) Pib1 + Populacao1;
    Soma2Atributos2 = (float) Pib2 + Populacao2;
    printf("A soma dos atributos é: \n Carta 1: %.2f \n Carta 2: %.2f\n", Soma2Atributos1, Soma2Atributos2);
    if((Pib1>Pib2 && Populacao1>Populacao2) && Soma2Atributos1 > Soma2Atributos2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(Pib1 == Pib2 && Populacao1 == Populacao2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break; 
    case 5: // População + Pontos Turísticos 
    printf("\nPontos Turísticos");
    printf("\nCarta 1: %i Carta 2: %i \n", PontosT1, PontosT2);
    Soma2Atributos1 = PontosT1 + Populacao1;
    Soma2Atributos2 = PontosT2 + Populacao2;
    printf("A soma dos atributos é: \n Carta 1: %.2f \n Carta 2: %.2f\n", Soma2Atributos1, Soma2Atributos2);
    if((PontosT1>PontosT2 && Populacao1 > Populacao2) && Soma2Atributos1> Soma2Atributos2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(PontosT1 == PontosT2 && Populacao1 == Populacao2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
    case 6: //População - Densidade Demográfica
    printf("\nDensidade Demográfica");
    printf("\nCarta 1: %.2f Carta 2: %.2f \n", Densidade1, Densidade2);
    Soma2Atributos1 = (float) Populacao1 - Densidade1;
    Soma2Atributos1 = (float) Populacao2 - Densidade2;
    printf("A soma dos atributos é: \n Carta 1: %.2f \n Carta 2: %.2f\n", Soma2Atributos1, Soma2Atributos2);
    if((Densidade1 < Densidade2 && Populacao1 > Populacao2) && Soma2Atributos1 > Soma2Atributos2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(Densidade1 == Densidade2 && Populacao1 == Populacao2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
    default:
        printf("Opção Inválida");
    break;
    }
case 3: //Compara a Área
    printf("\nCidade 1: %s Cidade 2: %s \n", NomeCidade1,NomeCidade2 );
    printf("\nÁrea");
    printf("\nCarta 1: %.2f Carta 2: %.2f \n", Area1, Area2);
    printf("Escolha o segundo a tributo!!!");
    scanf("%d", &opacao2);
    switch(opacao2){ //swith dentro do switch para escolher o segundo atributo
    case 3:    
        printf("Atributo ja escolhido");
    break;
    case 2: // Area + Populaçã0
    printf("\nPopulação");
    printf("\nCarta 1: %d Carta 2: %d \n", Populacao1, Populacao2);
    Soma2Atributos1 = (float) Populacao1 + Area1;
    Soma2Atributos2 = (float)Populacao2 + Area2;
    printf("A soma dos atributos é: \n Carta 1: %.2f \n Carta 2: %.2f\n", Soma2Atributos1, Soma2Atributos2);
    if((Area1>Area2 && Populacao1>Populacao2) && Soma2Atributos1 > Soma2Atributos2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(Area1 == Area2 && Populacao1 == Populacao2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
    case 4: //PIB + Area
    
    Pib1 = Pib1 / 1000000000; // resumir para tornar mais facil a vizualização 
    Pib2 = Pib2 / 1000000000;
    printf("\nPIB");
    printf("\nCarta 1: %.2f Bilhões Carta 2: %.2f Bilhões \n", Pib1, Pib2);
    Pib1 = Pib1 * 1000000000;
    Pib2 = Pib2 * 1000000000;
    Soma2Atributos1 = Pib1 + Area1;
    Soma2Atributos2 = Pib2 + Area2;
    printf("A soma dos atributos é: \n Carta 1: %.2f \n Carta 2: %.2f\n", Soma2Atributos1, Soma2Atributos2);
    if((Pib1>Pib2 && Area1>Area2) && Soma2Atributos1 > Soma2Atributos2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(Pib1 == Pib2 && Area1 == Area2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
    case 5: //Area + Ponto Ponto Turístico
    printf("\nPontos Turísticos");
    printf("\nCarta 1: %i Carta 2: %i \n", PontosT1, PontosT2);
    Soma2Atributos1 = (float)PontosT1 + Area1;
    Soma2Atributos2 = (float)PontosT2 + Area2;
    printf("A soma dos atributos é: \n Carta 1: %.2f \n Carta 2: %.2f\n", Soma2Atributos1, Soma2Atributos2);
    if((PontosT1>PontosT2 && Area1 > Area2) && Soma2Atributos1> Soma2Atributos2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(PontosT1 == PontosT2 && Area1 == Area2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
    case 6: // Area + Densidade Demográfica
    printf("\nDensidade Demográfica");
    printf("\nCarta 1: %.2f Carta 2: %.2f \n", Densidade1, Densidade2);
    Soma2Atributos1 =  Area1 - Densidade1;
    Soma2Atributos1 =  Area2 - Densidade2;
    printf("A soma dos atributos é: \n Carta 1: %.2f \n Carta 2: %.2f\n", Soma2Atributos1, Soma2Atributos2);
    if((Densidade1 < Densidade2 && Area1 > Area2) && Soma2Atributos1 > Soma2Atributos2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(Densidade1 == Densidade2 && Area1 == Area2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
    default:
        printf("Opção Inválida");
    break;
    }
case 4: //Compara o PIB
    Pib1 = Pib1 / 1000000000;
    Pib2 = Pib2 / 1000000000;
    printf("\nCidade 1: %s Cidade 2: %s", NomeCidade1,NomeCidade2 );
    printf("\nPIB");
    printf("\nCarta 1: %.2f Bilhões Carta 2: %.2f Bilhões \n", Pib1, Pib2);
    Pib1 = Pib1 * 1000000000;
    Pib2 = Pib2 * 1000000000;
    printf("Escolha o segundo a tributo!!!");
    scanf("%d", &opacao2);
    switch(opacao2){ //swith dentro do switch para escolher o segundo atributo
    case 4:    
        printf("Atributo ja escolhido");
    break;
    case 2: // Pib + População
    printf("\nPopulação");
    printf("\nCarta 1: %d Carta 2: %d \n", Populacao1, Populacao2);
    Soma2Atributos1 = (float)Pib1 + Populacao1;
    Soma2Atributos2 = (float)Pib2 + Populacao2;
    printf("A soma dos atributos é: \n Carta 1: %.2f \n Carta 2: %.2f\n", Soma2Atributos1, Soma2Atributos2);
    if((Pib1>Pib2 && Populacao1>Populacao2) && Soma2Atributos1 > Soma2Atributos2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if((Pib1 = Pib2 && Populacao1 == Populacao2)){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
    case 3: // PIB + Area
    printf("\nÁrea");
    printf("\nCarta 1: %.2f Carta 2: %.2f \n", Area1, Area2);
    Soma2Atributos1 = Pib1 + Area1;
    Soma2Atributos2 = Pib2 + Area2;
    printf("A soma dos atributos é: \n Carta 1: %.2f \n Carta 2: %.2f\n", Soma2Atributos1, Soma2Atributos2);
    if((Area1>Area2 && Pib1>Pib2) && Soma2Atributos1 > Soma2Atributos2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(Area1 == Area2 && Pib1 == Pib2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
    case 5: //PIB + Ponto Turístico
    printf("\nPontos Turísticos");
    printf("\nCarta 1: %i Carta 2: %i \n", PontosT1, PontosT2);
    Soma2Atributos1 = (float)PontosT1 + Pib1;
    Soma2Atributos2 = (float)PontosT2 + Pib2;
    printf("A soma dos atributos é: \n Carta 1: %.2f \n Carta 2: %.2f\n", Soma2Atributos1, Soma2Atributos2);
    if((PontosT1>PontosT2 && Pib1 > Pib2) && Soma2Atributos1> Soma2Atributos2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(PontosT1 == PontosT2 && Pib1 == Pib2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
    case 6: // PIB - Densidade Demográfica
    printf("\nDensidade Demográfica");
    printf("\nCarta 1: %.2f Carta 2: %.2f \n", Densidade1, Densidade2);
    Soma2Atributos1 =  Pib1 - Densidade1;
    Soma2Atributos1 =  Pib2 - Densidade2;
    printf("A soma dos atributos é: \n Carta 1: %.2f \n Carta 2: %.2f\n", Soma2Atributos1, Soma2Atributos2);
    if((Densidade1 < Densidade2 && Pib1 > Pib2) && Soma2Atributos1 > Soma2Atributos2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(Densidade1 == Densidade2 && Pib1 == Pib2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
    default:
        printf("Opção Inválida");
    break;
    }
case 5: //Compara os Pontos Turísticos
    printf("\nCidade 1: %s Cidade 2: %s", NomeCidade1,NomeCidade2 );
    printf("\nPontos Turísticos");
    printf("\nCarta 1: %i Carta 2: %i \n", PontosT1, PontosT2);
    printf("Escolha o segundo a tributo!!!");
    scanf("%d", &opacao2);
    switch(opacao2){ //swith dentro do switch para escolher o segundo atributo
    case 5:    
        printf("Atributo ja escolhido");
        break;
    case 3: // Pontos Turísticos + Area
    printf("\nÁrea");
    printf("\nCarta 1: %.2f Carta 2: %.2f \n", Area1, Area2);
    Soma2Atributos1 = (float) PontosT1 + Area1;
    Soma2Atributos2 = (float)PontosT2 + Area2;
    printf("A soma dos atributos é: \n Carta 1: %.2f \n Carta 2: %.2f\n", Soma2Atributos1, Soma2Atributos2);
    if(Area1>Area2 && PontosT1>PontosT2&& Soma2Atributos1 > Soma2Atributos2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(Area1 == Area2 && PontosT1 == PontosT2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
    case 4: //Pontos Turísticos + PIB
    
    Pib1 = Pib1 / 1000000000; // resumir para tornar mais facil a vizualização 
    Pib2 = Pib2 / 1000000000;
    printf("\nPIB");
    printf("\nCarta 1: %.2f Bilhões Carta 2: %.2f Bilhões \n", Pib1, Pib2);
    Pib1 = Pib1 * 1000000000;
    Pib2 = Pib2 * 1000000000;
    Soma2Atributos1 = (float) Pib1 + PontosT1;
    Soma2Atributos2 = (float) Pib2 + PontosT2;
    printf("A soma dos atributos é: \n Carta 1: %.2f \n Carta 2: %.2f\n", Soma2Atributos1, Soma2Atributos2);
    if((Pib1>Pib2 && PontosT1>PontosT2) && Soma2Atributos1 > Soma2Atributos2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(Pib1 == Pib2 && PontosT1 == PontosT2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
    case 2: // População + Pontos Turísticos 
    printf("\nPontos Turísticos");
    printf("\nCarta 1: %i Carta 2: %i \n", PontosT1, PontosT2);
    Soma2Atributos1 = PontosT1 + Populacao1;
    Soma2Atributos2 = PontosT2 + Populacao2;
    printf("A soma dos atributos é: \n Carta 1: %.2f \n Carta 2: %.2f\n", Soma2Atributos1, Soma2Atributos2);
    if((PontosT1>PontosT2 && Populacao1 > Populacao2) && Soma2Atributos1> Soma2Atributos2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(PontosT1 == PontosT2 && Populacao1 == Populacao2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
    case 6: //Pontos Turísticos - Densidade Demográfica
    printf("\nDensidade Demográfica");
    printf("\nCarta 1: %.2f Carta 2: %.2f \n", Densidade1, Densidade2);
    Soma2Atributos1 = (float) PontosT1 - Densidade1;
    Soma2Atributos1 = (float) PontosT2 - Densidade2;
    printf("A soma dos atributos é: \n Carta 1: %.2f \n Carta 2: %.2f\n", Soma2Atributos1, Soma2Atributos2);
    if((Densidade1 < Densidade2 && PontosT1 > PontosT2) && Soma2Atributos1 > Soma2Atributos2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(Densidade1 == Densidade2 && PontosT1 == PontosT2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
    default:
        printf("Opção Inválida");
    break;
    }
case 6: //Compara a Densidade Demografica
    printf("\nCidade 1: %s Cidade 2: %s", NomeCidade1,NomeCidade2 );
    printf("\nDensidade Demográfica");
    printf("\nCarta 1: %.2f Carta 2: %.2f \n", Densidade1, Densidade2);
    printf("Escolha o segundo a tributo!!!");
    scanf("%d", &opacao2);
    switch(opacao2){ //swith dentro do switch para escolher o segundo atributo
    case 6:    
        printf("Atributo ja escolhido");
    break;
    case 2: // Pib + Densidade Demográfica
    printf("\nPopulação");
    printf("\nCarta 1: %d Carta 2: %d \n", Populacao1, Populacao2);
    Soma2Atributos1 = (float)Densidade1 + Populacao1;
    Soma2Atributos2 = (float)Densidade2 + Populacao2;
    printf("A soma dos atributos é: \n Carta 1: %.2f \n Carta 2: %.2f\n", Soma2Atributos1, Soma2Atributos2);
    if((Pib1>Pib2 && Densidade1<Densidade2) && Soma2Atributos1 > Soma2Atributos2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if((Pib1 = Pib2 && Densidade1 == Densidade2)){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
    case 3: // Densidade Demográfica + Area
    printf("\nÁrea");
    printf("\nCarta 1: %.2f Carta 2: %.2f \n", Area1, Area2);
    Soma2Atributos1 = Densidade1 + Area1;
    Soma2Atributos2 = Densidade2 + Area2;
    printf("A soma dos atributos é: \n Carta 1: %.2f \n Carta 2: %.2f\n", Soma2Atributos1, Soma2Atributos2);
    if((Area1>Area2 && Densidade1<Densidade2) && Soma2Atributos1 > Soma2Atributos2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(Area1 == Area2 && Densidade1 == Densidade2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
    case 5: //Densidade Demográfica + Ponto Turístico
    printf("\nPontos Turísticos");
    printf("\nCarta 1: %i Carta 2: %i \n", PontosT1, PontosT2);
    Soma2Atributos1 = (float)PontosT1 + Densidade1;
    Soma2Atributos2 = (float)PontosT2 + Densidade2;
    printf("A soma dos atributos é: \n Carta 1: %.2f \n Carta 2: %.2f\n", Soma2Atributos1, Soma2Atributos2);
    if((PontosT1>PontosT2 && Densidade1 <  Densidade2) && Soma2Atributos1> Soma2Atributos2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(PontosT1 == PontosT2 && Densidade1 == Densidade2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
    case 4: // PIB - Densidade Demográfica
    printf("\nDensidade Demográfica");
    printf("\nCarta 1: %.2f Carta 2: %.2f \n", Densidade1, Densidade2);
    Soma2Atributos1 =  Pib1 - Densidade1;
    Soma2Atributos1 =  Pib2 - Densidade2;
    printf("A soma dos atributos é: \n Carta 1: %.2f \n Carta 2: %.2f\n", Soma2Atributos1, Soma2Atributos2);
    if((Densidade1 < Densidade2 && Pib1 > Pib2) && Soma2Atributos1 > Soma2Atributos2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(Densidade1 == Densidade2 && Pib1 == Pib2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
    default:
        printf("Opção Inválida");
    break;
    } 
default:
    printf("Opção Inválida");
break;
}
}