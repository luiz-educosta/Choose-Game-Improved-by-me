#include <stdio.h>

int main() {
    
    //imprime cabeçalho do jogo
    printf("***************************************\n");
    printf("*Bem vindo ao nosso jogo de advinhação*\n");
    printf("***************************************\n");

    //declaração de variaveis
    int numerosecreto = 42;
    int chute;

    //leitura do número chutado
    printf("Qual é o seu chute?\n");
    scanf("%d", &chute);
    printf("Seu chute foi %d. \n", chute);

    //tomando a decisão se acertou ou não
    if(chute == numerosecreto){
        printf("Parabéns! Você acertou!\n");
        printf("Jogue de novo, você é um bom jogador!\n");
    }
    else{
        if(chute > numerosecreto){
            printf("Seu chute foi maior que o número secreto!\n");
        }
        if(chute < numerosecreto){
            printf("Seu chute foi menor que o número secreto!\n");
        }
    }
    

}
