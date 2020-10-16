#include <stdio.h>

#define TENTATIVAS 3

int main() {
    
    //imprime cabeçalho do jogo
    printf("***************************************\n");
    printf("*Bem vindo ao nosso jogo de advinhação*\n");
    printf("***************************************\n");

    //declaração de variaveis
    int numerosecreto = 42;
    int chute;
    int i;


    //loop de repetição até ter 3 acertos
    for (i = 1; i <= TENTATIVAS; i++){


        printf("Tentativa %d de %d!\n",i,TENTATIVAS);

        //leitura do número chutado
        printf("Qual é o seu chute?\n");
         scanf("%d", &chute);
        printf("Seu chute foi %d. \n", chute);

        //tomando a decisão se acertou ou não
        int acertou = (chute == numerosecreto);
        if(acertou){
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");

            //sai do loop
            break;
         }
            else{

            int maior = chute > numerosecreto;

            if(maior){
                printf("Seu chute foi maior que o número secreto!\n");
            } else{
                printf("Seu chute foi menor que o número secreto!\n");
        }
        
            
    }

       
     printf("Fim de jogo!\n");



    }


    
    

}
