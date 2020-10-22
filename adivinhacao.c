#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    //imprime cabeçalho do jogo
 printf("\n\n\n\n");
 printf("    ____                         _           _                                             \n");
 printf("   |  _ \\                       (_)         | |                                           \n");
 printf("   | |_) | ___ _ __ ___   __   ___ _ __   __| | ___                                        \n");
 printf("   |  _ < / _ \\ '_ ` _ \\  \\ \\ / / | '_ \\ / _` |/ _ \\                                 \n");
 printf("   | |_) |  __/ | | | | |  \\ V /| | | | | (_| | (_) |                                     \n");
 printf("   |____/ \\___|_|_|_|_|_|   \\_/ |_|_| |_|\\__,_|\\___/                                   \n");
 printf("         _   / _` |/ _ \\           _                                                      \n");
 printf("        (_) | (_| | (_) |         | |                                                      \n");
 printf("         _  _\\__,_|\\___/___     __| | ___                                                \n");
 printf("        | |/ _ \\ / _` |/ _ \\   / _` |/ _ \\                                              \n");
 printf("        | | (_) | (_| | (_) | | (_| |  __/                                                 \n");
 printf("        | |\\___/ \\__, |\\___/   \\__,_|\\___|                                            \n");
 printf("       _/ |       __/ |                                                                    \n");
 printf("      |__/  _____|___/___      _______ _   _ _    _          _____   /\\/|  ____           \n");
 printf("      /\\   |  __ \\_   _\\ \\    / /_   _| \\ | | |  | |   /\\   / ____| |/\\/  / __ \\   \n");
 printf("     /  \\  | |  | || |  \\ \\  / /  | | |  \\| | |__| |  /  \\ | |       / \\ | |  | |    \n");
 printf("    / /\\ \\ | |  | || |   \\ \\/ /   | | | . ` |  __  | / /\\ \\| |      / _ \\| |  | |   \n");
 printf("   / ____ \\| |__| || |_   \\  /   _| |_| |\\  | |  | |/ ____ \\ |____ / ___ \\ |__| |     \n");
 printf("  /_/    \\_\\_____/_____|   \\/   |_____|_| \\_|_|  |_/_/    \\_\\_____/_/   \\_\\____/   \n");
 printf("                                                              )_)                          \n");
printf("\n\n\n\n");
    //gerando números aleatórios
    int segundos = time(0);
    srand(segundos);
    int numerogrande = rand();
    int numerosecreto = numerogrande % 100;

    //declaração de variaveis
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    int acertou = 0;
    int numerodetentativas;
    int i;
    int nivel;

    //escolhendo o nível de dificuldade
    printf("Qual o nível de dificuldade voce quer jogar?\n");
    printf("|1| - Fácil\n");
    printf("|2| - Médio\n");
    printf("|3| - Difícil\n\n");
    printf("Escolha: ");
    scanf("%d",&nivel);

    
    switch (nivel)
    {
    case 1:
        numerodetentativas = 20;
        break;
    case 2: numerodetentativas = 15;
        break;

    default:
        numerodetentativas = 7;
        break;
    }
       

    //loop de repetição até acertar
    for ( i = 1; i <= numerodetentativas; i++){


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
        acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);

        if(acertou){
           /* printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");

            //sai do loop*/
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

    if (acertou) {
        printf("\n\n\n");

        printf("   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$'               `$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   \n");
        printf("   $$$$$$$$$$$$$$$$$$$$$$$$$$$$'                   `$$$$$$$$$$$$$$$$$$$$$$$$$$$$   \n");
        printf("   $$$'`$$$$$$$$$$$$$'`$$$$$$!                       !$$$$$$'`$$$$$$$$$$$$$'`$$$   \n");
        printf("   $$$$  $$$$$$$$$$$  $$$$$$$                         $$$$$$$  $$$$$$$$$$$  $$$$   \n");
        printf("   $$$$. `$' \' \\$`  $$$$$$$!                         !$$$$$$$  '$/ `/ `$' .$$$$  \n");
        printf("   $$$$$. !\\  i  i .$$$$$$$$                           $$$$$$$$. i  i  /! .$$$$$  \n");
        printf("   $$$$$$   `--`--.$$$$$$$$$                           $$$$$$$$$.--'--'   $$$$$$   \n");
        printf("   $$$$$$L        `$$$$$^^$$                           $$^^$$$$$'        J$$$$$$   \n");
        printf("   $$$$$$$.   .'   ""~   $$$    $.                 .$  $$$   ~""   `.   .$$$$$$$   \n");
        printf("   $$$$$$$$.  ;      .e$$$$$!    $$.             .$$  !$$$$$e,      ;  .$$$$$$$$   \n");
        printf("   $$$$$$$$$   `.$$$$$$$$$$$$     $$$.         .$$$   $$$$$$$$$$$$.'   $$$$$$$$$   \n");
        printf("   $$$$$$$$    .$$$$$$$$$$$$$!     $$`$$$$$$$$'$$    !$$$$$$$$$$$$$.    $$$$$$$$   \n");
        printf("   $JT&yd$     $$$$$$$$$$$$$$$$.    $    $$    $   .$$$$$$$$$$$$$$$$     $by&TL$   \n");
        printf("                                  $    $$    $                                     \n");
        printf("                                  $.   $$   .$                                     \n");
        printf("                                 `$        $'                                      \n");
        printf("                                `$$$$$$$$'                                         \n");
        printf("\n\n\n\n");




        printf("Você acertou em %d tentativas!\n",tentativas);
        printf("Total de pontos: %.1f\n",pontos);
    }else{
        printf("Você perdeu! Tente de novo!\n\n\n\n");


        printf("                                                                     ..         \n");
        printf("                                        ,,,                         MM .M       \n");
        printf("                                     ,!MMMMMMM!,                     MM MM  ,.  \n");
        printf("             ., .M                .MMMMMMMMMMMMMMMM.,          'MM.  MM MM .M'  \n");
        printf("             . M: M;  M          .MMMMMMMMMMMMMMMMMMMMMM,          'MM,:M M'!M' \n");
        printf("             ;M MM M: .M        .MMMMMMMMMMMMMMMMMMMMMMMMMM,         'MM'...'M  \n");
        printf("             M;MM;M :MM      .MMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.       .MMMMMMMM   \n");
        printf("             'M;M'M MM      MMMMMM  MMMMMMMMMMMMMMMMM  MMMMMM.    ,,M.M.'MMM'   \n");
        printf("             MM'MMMM      MMMMMM @@ MMMMMMMMMMMMMMM @@ MMMMMMM.'M''MMMM;MM'     \n");
        printf("             MM., ,MM     MMMMMMMM  MMMMMMMMMMMMMMMMM  MMMMMMMMM      '.MMM     \n");
        printf("             'MM;MMMMMMMM.MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.      'MMM     \n");
        printf("             ''.'MMM'  .MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM       MMMM     \n");
        printf("             MMC      MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.      'MMMM     \n");
        printf("             .MM      :MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM''MMM       MMMMM   \n");
        printf("             MMM      :M  'MMMMMMMMMMMMM.MMMMM.MMMMMMMMMM'.MM  MM:M.    'MMMMM  \n");
        printf("             .MMM   ...:M: :M.'MMMMMMMMMMMMMMMMMMMMMMMMM'.M''   MM:MMMMMMMMMMMM'\n");
        printf("             AMMM..MMMMM:M.    :M.'MMMMMMMMMMMMMMMMMMMM'.MM'     MM'''''''''''' \n");
        printf("             MMMMMMMMMMM:MM     'M'.M'MMMMMMMMMMMMMM'.MC'M'     .MM             \n");
        printf("             '''''''''':MM.       'MM!M.'M-M-M-M'M.'MM'        MMM              \n");
        printf("                         MMM.            'MMMM!MMMM'            .MM             \n");
        printf("                         MMM.             '''   ''            .MM'              \n");
        printf("                         MMM.                               MMM'                \n");
        printf("                         MMMM            ,.J.JJJJ.       .MMM'                  \n");
        printf("                             MMMM.       'JJJJJJJ'JJJM   CMMMMM                 \n");
        printf("                             MMMMM.    'JJJJJJJJ'JJJ .MMMMM'                    \n");
        printf("                                 MMMMMMMM.'  'JJJJJ'JJMMMMM'                    \n");
        printf("                                 'MMMMMMMMM'JJJJJ JJJJJ'                        \n");
        printf("                                     ''MMMMMMJJJJJJJJJJ'                        \n");
        printf("                                             'JJJJJJJJ'                         \n");
        printf("\n\n\n");

    }

    

}
