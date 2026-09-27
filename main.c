#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(){
    srand(time(NULL));
    //variables
    char name[50]="",play[50]="",eo[50]="",hint[50]="";
    int sec,guess,di,h,z;
    int tries = 0;
    
    printf("----Welcome to GUESSX----\n\n\n");
    //for entering name
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';
    printf("**TYPE 290108 FOR HINT**\n");
    do{
        while(1){
            printf("Please select the difficulty:-\n1---V. EASY\n2---EASY\n3---MEDIUM\n4---HARD\n5---EXTREME\n:");
            scanf("%d",&di);
            //veasy
            if(di == 1){
                sec = rand() %30 + 1;
                while(1){
                    printf("Guess the number from 1 to 30: ");
                    scanf("%d",&guess);
                    tries++;
                    //completion msg
                    if(guess==sec){
                        if(tries<4){
                            printf("Crazy %s!! Got it in only %d tries",name,tries);
                        }
                        else if(tries<10){
                            printf("Good job %s!!You got it in %d tries",name,tries);
                        }
                        else{
                            printf("You got it in %d tries, how did you make it this far??",tries);
                        }
                        break;
                    }
                    else if(guess==300108){
                        printf("The match has ended.\nThe number was %d",sec);
                        break;
                    }
                    //hintsystem
                    else if(guess==290108){
                        h = rand()%2;
                        if(h==1){
                            (sec%2==0)?strcpy(eo,"even"):strcpy(eo,"odd");
                            snprintf(hint, sizeof(hint),"The number is %s\n",eo);
                        }
                        else{
                            z=sec/10;
                            snprintf(hint, sizeof(hint),"The number starts with %g\n",floor(z));
                        }
                        printf("You are being provided a hint ;)\n%s",hint);
                        tries--;
                    }
                    else if(guess==sec-1 || guess==sec+1){
                        printf("The number is right next to this\n");
                    }
                    else if(guess>sec-6 && guess<sec){
                        printf("This number is little low:/\n");
                    }
                    else if(guess<sec+6 && guess>sec){
                        printf("This number is little high:/\n");
                    }
                    else if(guess>sec){
                        printf("This number is higher :(\n");
                    }
                    else{
                        printf("This number is lower :(\n");
                    }
                }
                break;
            }
            //easy
            else if(di == 2){
                sec = rand() %100 + 1;
                while(1){
                    printf("Guess the number from 1 to 100: ");
                    scanf("%d",&guess);
                    tries++;
                    if(guess==sec){
                        if(tries<4){
                            printf("Masterfully played, got it in only %d tries",tries);
                        }
                        else if(tries<8){
                            printf("Good job %s!!You got it in %d tries",name,tries);
                        }
                        else{
                            printf("The number has been guessed. FINALLY ");
                        }
                        break;
                    }
                    else if(guess==300108){
                        printf("The match has ended.\nThe number was %d",sec);
                        break;
                    }
                    else if(guess==290108){
                    h = rand()%2;
                    if(h==1){
                        (sec%2==0)?strcpy(eo,"even"):strcpy(eo,"odd");
                        snprintf(hint, sizeof(hint),"The number is %s\n",eo);
                    }
                    else{
                        z=sec/10;
                        snprintf(hint,sizeof(hint),"The number starts with %d\n",z);
                    }
                        printf("You are being provided a hint ;)\n%s",hint);
                        tries--;
                    }
                    else if (guess==sec-1 || guess==sec+1){
                        printf("The number is right next to this\n");
                    }
                    else if(guess>sec-10 && guess<sec){
                        printf("This number is little low:/\n");
                    }
                    else if(guess<sec+10 && guess>sec){
                        printf("This number is little high:/\n");
                    }
                    else if(guess>sec){
                        printf("This number is higher :(\n");
                    }
                    else{
                        printf("This number is lower :(\n");
                    }
                }
                break;
            }
            //medium
            else if(di == 3){
                sec = rand() %500 + 1;
                while(1){
                    printf("Guess the number from 1 to 500: ");
                    scanf("%d",&guess);
                    tries++;
                    if(guess==sec){
                        if(tries<6){
                            printf("Should buy a lottery. Got it in only %d tries",tries);
                        }
                        else if(tries<11){
                            printf("Good job %s!!You got it in %d tries",name,tries);
                        }
                        else{
                            printf("Got it in %d tries, Very bad",tries);
                        }
                        break;
                    }
                    else if(guess==300108){
                        printf("The match has ended.\nThe number was %d",sec);
                        break;
                    }
                    else if(guess==290108){
                    h = rand()%2;
                    if(h==1){
                        (sec%2==0)?strcpy(eo,"even"):strcpy(eo,"odd");
                        snprintf(hint, sizeof(hint),"The number is %s\n",eo);
                    }
                    else{
                        z=sec/100;
                        snprintf(hint,sizeof(hint),"The number starts with %d\n",z);
                    }
                        printf("You are being provided a hint ;)\n%s",hint);
                        tries--;
                    }
                    else if(guess==sec-1 || guess==sec+1){
                        printf("The number is right next to this\n");
                    }
                    else if(guess>sec-15 && guess<sec){
                        printf("This number is little low:/\n");
                    }
                    else if(guess<sec+15 && guess>sec){
                        printf("This number is little high:/\n");
                    }
                    else if(guess>sec){
                        printf("This number is higher :(\n");
                    }
                    else{
                        printf("This number is lower :(\n");
                    }
                }
                break;
            }
            //hard
            else if(di == 4){
                sec = rand() %1000 + 1;
                while(1){
                    printf("Guess the number from 1 to 1000: ");
                    scanf("%d",&guess);
                    tries++;
                    if(guess==sec){
                        if(tries<7){
                            printf("Amazing %s, you got it in only %d tries",name,tries);
                        }
                        else if(tries<11){
                            printf("Good job %s!!You got it in %d tries",name,tries);
                        }
                        else{
                            printf("You got it but i mean how can you be this bad");
                        }
                        break;
                    }
                    else if(guess==300108){
                        printf("The match has ended.\nThe number was %d",sec);
                        break;
                    }
                    else if(guess==290108){
                        h = rand()%2;
                        if(h==1){
                            (sec%2==0)?strcpy(eo,"even"):strcpy(eo,"odd");
                            snprintf(hint, sizeof(hint),"The number is %s\n",eo);
                        }
                        else{
                            z=sec/100;
                            snprintf(hint,sizeof(hint),"The number starts with %d\n",z);
                        }
                        printf("U r being provided a hint ;)\n%s",hint);
                        tries--;
                    }
                    else if(guess==sec-1 || guess==sec+1){
                        printf("The number is right next to this\n");
                    }
                    else if(guess>sec-20 && guess<sec){
                        printf("This number is liittle low:/\n");
                    }
                    else if(guess<sec+20 && guess>sec){
                        printf("This number is little high:/\n");
                    }
                    else if(guess>sec){
                        printf("This number is higher :(\n");
                    }
                    else{
                        printf("This number is lower :(\n");
                    }
                }
                break;
            }
            //extreme
            else if(di == 5){
                sec = rand() %100000 + 1;
                while(1){
                    printf("Guess the number from 1 to 100000: ");
                    scanf("%d",&guess);
                    tries++;
                    if(guess==sec){
                        if(tries<13){
                            printf("Amazing!!Wonderfully played %s,got it in only %d tries.",name,tries);
                        }
                        else if(tries<17){
                            printf("Good job %s,got it in %d tries",name,tries);
                        }
                        else if(tries<21){
                            printf("Can definitly do better.Took %d tries **tsk tsk tsk**",tries);
                        }
                        else{
                            printf("Finally got it.quit life atp.");
                        }
                        break;
                    }
                    else if(guess==300108){
                        printf("The match has ended.\nThe number was %d",sec);
                        break;
                    }
                    else if(guess==290108){
                    h = rand()%2;
                    if(h==1){
                        (sec%2==0)?strcpy(eo,"even"):strcpy(eo,"odd");
                        snprintf(hint, sizeof(hint),"The number is %s\n",eo);
                    }
                    else{
                        z=sec/1000;
                        snprintf(hint,sizeof(hint),"The number starts with %d\n",z);
                    }
                        printf("You are being provided a hint ;)\n%s",hint);
                        tries--;
                    }
                    else if(guess==sec-1||guess==sec+1){
                        printf("The number is right next to this\n");
                    }
                    else if(guess>sec-100 && guess<sec){
                        printf("This number is little low:/\n");
                    }
                    else if(guess<sec+100 && guess>sec){
                        printf("This number is little high:/\n");
                    }
                    else if(guess>sec){
                        printf("This number is higher :(\n");
                    }
                    else{
                        printf("This number is lower :(\n");
                    }
                }
                break;
            }
            else if(di==10){
                printf("\n\nWITH PERFECT PLAY AVERAGE TRIES FOR:\n1.V.EASY=4.2\n2.EASY=4.8\n3.MEDIUM=6.1\n4.HARD=8\n5.EXTREME=14.5\n\n");
            }
            else{
            printf("Select from 1 to 5 dummy!  >:(\n");
            }
        }
        printf("\n\nEnter 'again' to play again: \n");
        int error;
        while((error = getchar()) != '\n' && error !=EOF);
        fgets(play,sizeof(play),stdin);
        play[strlen(play)-1]='\0';
    }
    while(strcmp(play,"again")==0);
    printf("The game has ended.");
    return 0;
}