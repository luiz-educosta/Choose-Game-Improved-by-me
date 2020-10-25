#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void screnclear(){
    system("clear");
}

void header(int headerstatus){

    if (headerstatus == 1)
    {
       //print header
        printf("\n\n\n\n");
        //ansi regular ascii art
        printf("         ██████ ██   ██  ██████   ██████  ███████ ███████     \n");
        printf("        ██      ██   ██ ██    ██ ██    ██ ██      ██          \n");
        printf("        ██      ███████ ██    ██ ██    ██ ███████ █████       \n");
        printf("        ██      ██   ██ ██    ██ ██    ██      ██ ██          \n");
        printf("         ██████ ██   ██  ██████   ██████  ███████ ███████     \n");
        printf("                                                              \n");
        printf("                                                              \n");
        printf("                             █████                            \n");
        printf("                            ██   ██                           \n");
        printf("                            ███████                           \n");
        printf("                            ██   ██                           \n");
        printf("                            ██   ██                           \n");
        printf("                                                              \n");
        printf("                                                              \n");
        printf("        ███    ██ ██    ██ ███    ███ ██████  ███████ ██████  \n");
        printf("        ████   ██ ██    ██ ████  ████ ██   ██ ██      ██   ██ \n");
        printf("        ██ ██  ██ ██    ██ ██ ████ ██ ██████  █████   ██████  \n");
        printf("        ██  ██ ██ ██    ██ ██  ██  ██ ██   ██ ██      ██   ██ \n");
        printf("        ██   ████  ██████  ██      ██ ██████  ███████ ██   ██ \n");
        printf("                                                              \n");
        printf("\n\n\n\n");
    }
    else if(headerstatus == 2){
        
        //print header
        printf("\n\n\n\n");
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

    }
    else {
        //print header
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

void firstmenu(){

    header(1);
    //1st menu
    int menu;
    printf("Welcome the game CHOSE A NUMBER!\n");
    printf("|1| - PLAY\n");
    printf("|2| - ABOUT\n");
    printf("|3| - CHANGE DIFFICULT\n");
    printf("|4| - CHANGE LANGUAGE\n");
    printf("|5| - EXIT\n");
    scanf("%d",&menu);

    screnclear();

    switch (menu)
    {
    case 1:
        /* code */
        break;
    case 2:

        break;

    case 3:

        break;

    case 4:

        break; 

    default:
        screnclear();
        exit(0);
        break;
    }



}
int main() {
    
    
    header(1);
        
    firstmenu();

    //random values
    int seconds = time(0);
    srand(seconds);
    int bignumber = rand();
    int secretnumber = bignumber % 100;

    //declaration of variables
    int shot;
    int attempts = 1;
    double points = 1000;
    int hit = 0;
    int numberofattempts;
    int i;
    int level;

    //Menu to choose the difficult
    printf("Choose your difficulty: \n");
    printf("|1| - Easy\n");
    printf("|2| - Meium\n");
    printf("|3| - Hard\n\n");
    printf("Choose: ");
    scanf("%d",&level);
    
    switch (level)
    {
    case 1:
        numberofattempts = 20;
        break;
    case 2: numberofattempts = 15;
        break;

    default:
        numberofattempts = 7;
        break;
    }
       

    //repeat loop until finish the attempts
    for ( i = 1; i <= numberofattempts; i++){


        printf("Attempt %d!\n",attempts);

        //reading the number entered
        printf("What number do you think it is?\n");
         scanf("%d", &shot);
        printf("You typed the number %d. \n", shot);

       //if the user typed a negative number
       if (shot < 0){
           printf(" You can't type a negative number, please type again!\n");
           //continues to perform as long it's true
           continue;
       }
       
        //making the decision whether it right or not


        hit = (shot == secretnumber);
        int bigger = (shot > secretnumber);

        if(hit){
           /* printf("Congratulations! You win!\n");
            printf("Play again, you are a good player!\n");

            //exit loop*/
            break;
         }
        else if(bigger){
            printf("The number entered was greater than the secret number!\n");
        } 
        else {
            printf("The number entered was less than the secret number!\n");
        }

        attempts ++;

        //out of the points
        double lostpoints = abs(shot - secretnumber)/(double)2;

        points = points - lostpoints;
        //convertion
    }

    printf("End of the game!\n"); 

    if (hit) {
        header(2);
        printf("You got it right in %d attempts!\n",attempts);
        printf("Score: %.1f\n",points);
    }else{
        header(3);
        printf("You lose! Try again!\n\n\n\n");  
    }

    

}
