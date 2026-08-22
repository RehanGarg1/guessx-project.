#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main(){
    char name [50]= "";
    int sec;
    int guess = 0;
    int tries = 0;
    int di = 0;
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';
    while(1){
        printf("Please select the difficulty.\n1---EASY\n2---MED\n3---HARD\n:");
        scanf("%d",&di);
        if(di == 1){
            srand(time(NULL));
            sec = rand() %30 + 1;
            while(1){
                printf("Guess the number from 1 to 30: ");
                scanf("%d",&guess);
                tries++;
                if(guess==sec){
                    printf("Good job %s!!You got it in %d tries",name,tries);
                    break;
                }
                else if(guess>sec-6 && guess<sec){
                    printf("little low:/\n");
                }
                else if(guess<sec+6 && guess>sec){
                    printf("Little high:/\n");
                }
                else if(guess>sec){
                printf("Too high :(\n");
                }
                else{
                    printf("Too low :(\n");
                }
            }
            break;
        }
        else if(di == 2){
            srand(time(NULL));
            sec = rand() %100 + 1;
            while(1){
                printf("Guess the number from 1 to 100: ");
                scanf("%d",&guess);
                tries++;
                if(guess==sec){
                    printf("Good job %s!!You got it in %d tries",name,tries);
                    break;
                }
                else if(guess>sec-10 && guess<sec){
                    printf("little low:/\n");
                }
                else if(guess<sec+10 && guess>sec){
                    printf("Little high:/\n");
                }
                else if(guess>sec){
                    printf("Too high :(\n");
                }
                else{
                    printf("Too low :(\n");
                }
            }
            break;
        }
        else if(di == 3){
            srand(time(NULL));
            sec = rand() %500 + 1;
            while(1){
                printf("Guess the number from 1 to 500: ");
                scanf("%d",&guess);
                tries++;
                if(guess==sec){
                    printf("Good job %s!!You got it in %d tries",name,tries);
                    break;
                }
                else if(guess>sec-15 && guess<sec){
                    printf("little low:/\n");
                }
                else if(guess<sec+15 && guess>sec){
                    printf("Little high:/\n");
                }
                else if(guess>sec){
                    printf("Too high :(\n");
                }
                else{
                    printf("Too low :(\n");
                }
            }
            break;
        }
        else{
            printf("Select from 1 to 3 dummy!  >:(\n");
        }
    }
    return 0;
}