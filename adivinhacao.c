#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    //imprime cabeçalho do jogo
    printf("***************************************\n");
    printf("*Bem vindo ao nosso jogo de advinhação*\n");
    printf("***************************************\n");

    //gerando números aleatórios
    int segundos = time(0);
    srand(segundos);
    int numerogrande = rand();
    int numerosecreto = numerogrande % 100;

    //declaração de variaveis
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    
    //loop de repetição até acertar
    while(1){


        printf("Tentativa %d!\n",tentativas);

        //leitura do número chutado
        printf("Qual é o seu chute?\n");
         scanf("%d", &chute);
        printf("Seu chute foi %d. \n", chute);

       //se o usuário digitou um número negativo
       if (chute < 0){
           printf("Você não pode digitar um número negativo, digite novamente!\n");
           //continua a executar enquanto é verdadeiro
           continue;
       }
       
        //tomando a decisão se acertou ou não


        //declaração de variáveis
        int acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);

        if(acertou){
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");

            //sai do loop
            break;
         }
        else if(maior){
            printf("Seu chute foi maior que o número secreto!\n");
        } 
        else {
            printf("Seu chute foi menor que o número secreto!\n");
        }

        tentativas ++;

        //operação de saída dos pontos
        double pontosperdidos = abs(chute - numerosecreto)/(double)2;

        pontos = pontos - pontosperdidos;
        //convertendo
    }

    printf("Fim de jogo!\n"); 
    printf("Você acertou em %d tentativas!\n",tentativas);
    printf("Total de pontos: %.1f\n",pontos);

}
