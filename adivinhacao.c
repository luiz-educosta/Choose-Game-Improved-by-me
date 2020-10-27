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
        printf("\n");
        //ansi regular ascii art
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$$██████$██$$$██$$██████$$$██████$$███████$███████$$$$$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$██$$$$$$██$$$██$██$$$$██$██$$$$██$██$$$$$$██$$$$$$$$$$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$██$$$$$$███████$██$$$$██$██$$$$██$███████$█████$$$$$$$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$██$$$$$$██$$$██$██$$$$██$██$$$$██$$$$$$██$██$$$$$$$$$$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$$██████$██$$$██$$██████$$$██████$$███████$███████ $$$$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$█████$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$██$$$██$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$███████$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$██$$$██$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$██$$$██$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$███$$$$██$██$$$$██$███$$$$███$██████$$███████$██████$$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$████$$$██$██$$$$██$████$$████$██$$$██$██$$$$$$██$$$██$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$██$██$$██$██$$$$██$██$████$██$██████$$█████$$$██████$$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$██$$██$██$██$$$$██$██$$██$$██$██$$$██$██$$$$$$██$$$██$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$██$$$████$$██████$$██$$$$$$██$██████$$███████ ██$$$██$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    }
    else if(headerstatus == 2){
        
        //print header
        printf("\n");
        printf("$$$$$$$$$$$$$$██$$$$██$$██████$$██$$$$██$$$$$██$$$$$██$██$███$$$$██$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$$██$$██$$██$$$$██$██$$$$██$$$$$██$$$$$██$██$████$$$██$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$$$████$$$██$$$$██$██$$$$██$$$$$██$$█$$██$██$██$██$$██$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$$$$██$$$$██$$$$██$██$$$$██$$$$$██$███$██$██$██$$██$██$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$$$$██$$$$$██████$$$██████$$$$$$$███$███$$██$██$$$████$$$$$$$$$$\n");    
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$'               `$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$'                   `$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$$$'`$$$$$$$$$$$$$'`$$$$$$!                       !$$$$$$'`$$$$$$$$$$$$$'`$$$\n");
        printf("$$$$  $$$$$$$$$$$  $$$$$$$                         $$$$$$$  $$$$$$$$$$$  $$$$\n");
        printf("$$$$. `$' \\' \\$`  $$$$$$$!                         !$$$$$$$  '$/ `/ `$' .$$$\n");
        printf("$$$$$. !\\  i  i .$$$$$$$$                           $$$$$$$$. i  i  /! .$$$$\n");
        printf("$$$$$$   `--`--.$$$$$$$$$                           $$$$$$$$$.--'--'   $$$$$$\n");
        printf("$$$$$$L        `$$$$$^^$$                           $$^^$$$$$'        J$$$$$$\n");
        printf("$$$$$$$.   .'     ~   $$$    $.                 .$  $$$   ~     `.   .$$$$$$$\n");
        printf("$$$$$$$$.  ;      .e$$$$$!    $$.             .$$  !$$$$$e,      ;  .$$$$$$$$\n");
        printf("$$$$$$$$$   `.$$$$$$$$$$$$     $$$.         .$$$   $$$$$$$$$$$$.'   $$$$$$$$$\n");
        printf("$$$$$$$$    .$$$$$$$$$$$$$!     $$`$$$$$$$$'$$    !$$$$$$$$$$$$$.    $$$$$$$$\n");
        printf("$$$$$$$     $$$$$$$$$$$$$$$$.    $    $$    $   .$$$$$$$$$$$$$$$$     $$$$$$$\n");
        printf("                               $    $$    $                                  \n");
        printf("                               $.   $$   .$                                  \n");
        printf("                              `$        $'                                   \n");
        printf("                             `$$$$$$$$'                                      \n");
        printf("\n");

    }
    else {
        //print header
        printf("           $$    $$  $$$$$$  $$    $$     $$       $$$$$$  $$$$$$$ $$$$$$$      \n"); 
        printf("            $$  $$  $$    $$ $$    $$     $$      $$    $$ $$      $$           \n");
        printf("             $$$$   $$    $$ $$    $$     $$      $$    $$ $$$$$$$ $$$$$        \n");
        printf("              $$    $$    $$ $$    $$     $$      $$    $$      $$ $$           \n");
        printf("              $$     $$$$$$   $$$$$$      $$$$$$$  $$$$$$  $$$$$$$ $$$$$$$      \n");
        printf("                                                                     ..         \n");
        printf("                                        ,,,                         $$ .$       \n");
        printf("                                     ,!$$$$$$$!,                     $$ $$  ,.  \n");
        printf("             ., .$                .$$$$$$$$$$$$$$$$.,          '$$.  $$ $$ .$'  \n");
        printf("             . $: $;  $          .$$$$$$$$$$$$$$$$$$$$$$,          '$$,:$ $'!$' \n");
        printf("             ;$ $$ $: .$        .$$$$$$$$$$$$$$$$$$$$$$$$$$,         '$$'...'$  \n");
        printf("             $;$$;$ :$$      .$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$.       .$$$$$$$$   \n");
        printf("             '$;$'$ $$      $$$$$$  $$$$$$$$$$$$$$$$$  $$$$$$.    ,,$.$.'$$$'   \n");
        printf("             $$'$$$$      $$$$$$ @@ $$$$$$$$$$$$$$$ @@ $$$$$$$.'$''$$$$;$$'     \n");
        printf("             $$., ,$$     $$$$$$$$  $$$$$$$$$$$$$$$$$  $$$$$$$$$      '.$$$     \n");
        printf("             '$$;$$$$$$$$.$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$.      '$$$     \n");
        printf("             ''.'$$$'  .$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$       $$$$     \n");
        printf("             $$C      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$.      '$$$$     \n");
        printf("             .$$      :$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$''$$$       $$$$$   \n");
        printf("             $$$      :$  '$$$$$$$$$$$$$.$$$$$.$$$$$$$$$$'.$$  $$:$.    '$$$$$  \n");
        printf("             .$$$   ...:$: :$.'$$$$$$$$$$$$$$$$$$$$$$$$$'.$''   $$:$$$$$$$$$$$$'\n");
        printf("             A$$$..$$$$$:$.    :$.'$$$$$$$$$$$$$$$$$$$$'.$$'     $$'''''''''''' \n");
        printf("             $$$$$$$$$$$:$$     '$'.$'$$$$$$$$$$$$$$'.$C'$'     .$$             \n");
        printf("             '''''''''':$$.       '$$!$.'$-$-$-$'$.'$$'        $$$              \n");
        printf("                         $$$.            '$$$$!$$$$'            .$$             \n");
        printf("                         $$$.             '''   ''            .$$'              \n");
        printf("                         $$$.                               $$$'                \n");
        printf("                         $$$$            ,.J.JJJJ.       .$$$'                  \n");
        printf("                             $$$$.       'JJJJJJJ'JJJ$   C$$$$$                 \n");
        printf("                             $$$$$.    'JJJJJJJJ'JJJ .$$$$$'                    \n");
        printf("                                 $$$$$$$$.'  'JJJJJ'JJ$$$$$'                    \n");
        printf("                                 '$$$$$$$$$'JJJJJ JJJJJ'                        \n");
        printf("                                     ''$$$$$$JJJJJJJJJJ'                        \n");
        printf("                                             'JJJJJJJJ'                         \n");
        printf("\n");
            }  
}


void game(){

    

    int shot;
    int attempts = 1;
    double points = 1000;
    int hit = 0;
   
    int i;

   //random values
    int seconds = time(0);
    srand(seconds);
    int bignumber = rand();
    int secretnumber = bignumber % 100;

    int numberofattempts;
       
    int level;
    //Menu to choose the difficult
    printf("Choose your difficulty: \n");
    printf("|1| - Easy\n");
    printf("|2| - Medium\n");
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

    screnclear();
    header(1);


    //repeat loop until finish the attempts
    for ( i = 1; i <= numberofattempts; i++){

        
        printf("Attempt %d!\n",attempts);

        //reading the number entered
        printf("What number do you think it is?\n");
         scanf("%d", &shot);
        printf("You typed the number %d. \n", shot);

       //if the user typed a negative number
       if (shot < 0){
            screnclear();
            header(1);
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

            screnclear();
            header(1);

            printf("The number entered was greater than the secret number!\n");
        } 
        else {

            screnclear();
            header(1);
            printf("The number entered was less than the secret number!\n");
        }

        attempts ++;

        //out of the points
        double lostpoints = abs(shot - secretnumber)/(double)2;

        points = points - lostpoints;
        //convertion
    }

    if (hit) {
        screnclear();
        header(2);
        printf("You got it right in %d attempts!\n",attempts);
        printf("Score: %.1f\n",points);
    }else{
        screnclear();
        header(3);

    }


}




void firstmenu(){

    //1st menu
    int menu = 0;

    while(menu < 1 || menu > 4){

        screnclear();
        header(1);

        printf("|1| - Play\n");
        printf("|2| - About\n");
        printf("|3| - Exit\n");

        scanf("%d",&menu);
     
        switch (menu)
        {
        case 1:
            screnclear();
            header(1);
            game();
            
            break;


        case 2:
            
            screnclear();
            header(1);
            printf("Game by Luiz Eduardo\n");
            printf("Version 1.0\n");
            printf("Oct 25\n");
            printf("|1| - Back\n");
            printf("|2| - Exit\n");
            scanf("%d",&menu);

            if( menu == 1){
                firstmenu();
            }else{
                screnclear();
                exit(0);       
            }
            break;

        default:
            screnclear();
            exit(0);
            break;
        }
    } 
}

int main() {     

    firstmenu();
    
    int decision; 
    printf("End of the game!\n"); 
    printf("|1| - Back to menu\n");
    printf("|2| - Exit\n");
    scanf("%d",&decision);

    if(decision ==1){
        firstmenu();
    }else{
        screnclear();
        exit(0);
    }
}
