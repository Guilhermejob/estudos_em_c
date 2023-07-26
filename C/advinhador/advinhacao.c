#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define NUMERO_DE_TENTATIVAS 5 -> define serve para definir constantes no codigo, constantes são variaveis imutaveis 

int main(){

    int numerosecreto, chute, tentativas, segundos;
    double pontos, pontosperdidos;

    segundos = time(0);
    pontos = 1000;
    srand(segundos);

    numerosecreto = rand() % 100;

    printf("%d dddddd", numerosecreto);

    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");
    printf("*********nivel facil 10 tentativas********\n");
    printf("*********nivel medio 10 tentativas********\n");
    printf("********nivel dificil 10 tentativas*******\n");

    printf("qual a tentativas que voce deseja jogar?\n");
    printf("facil digite 10\n");
    printf("medio digite 5\n");
    printf("dificil digite 3\n");
    scanf("%d", &tentativas);

    if(tentativas != 3 && tentativas != 5 && tentativas != 10){
        printf("%d", tentativas);
        printf("selecione uma tentativas valida");

       return 0;
    }


    for(int i = 1; i <= tentativas; i++){

        printf("tentativa %d de %d\n", i, tentativas);
        printf("Qual o seu chute? ");
        scanf("%d", &chute);

        if(chute < 0){
            printf("Voce nao pode chutar numeros negativos\n");
            i--;
            continue;
        }

        if(chute == numerosecreto){
            printf("Parabens, voce acertou!!\n");
            printf("Total de pontos: %.1f\n", pontos);

            break;
        }
        else{
            if(chute > numerosecreto){
                printf("O numero %d e maior que o numero secreto\n", chute);
            }else{
                printf("O numero %d e menor que o numero secreto \n", chute);
            }
        }

        pontosperdidos = abs(chute - numerosecreto) / (double)2;

        pontos = pontos - pontosperdidos;
    }
    
}

