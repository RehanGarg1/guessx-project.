#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int game(int l,int t);
void hints(int sec,int *p);
int firstDigit(int n);

int main(){

    srand(time(NULL));

    char name[100],play_again[10];
    int h,tries,diff,lim,swit,tar;

    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';

    do{
        // h=0;
        tries=0;
        printf("Please select the difficulty:-\n1---V. EASY\n2---EASY\n3---MEDIUM\n4---HARD\n5---EXTREME\n:");
        do{
            swit=0;
            scanf("%d",&diff);
            getchar();
            switch(diff){
                case 1:lim=30;break;
                case 2:lim=100;break;
                case 3:lim=500;break;
                case 4:lim=1000;break;
                case 5:lim=10000;break;
                case 10:printf("\n\nWITH PERFECT PLAY AVERAGE TRIES FOR:\n1.V.EASY=4.2\n2.EASY=4.8\n3.MEDIUM=6.1\n4.HARD=8\n5.EXTREME=14.5\n\n");break;
                default:printf("Please select a DIFFICULTY from 1 to 5\n");swit=1;
            }
        }while(swit);
        tar = rand() % lim + 1;
        // printf("%d\n",lim);
        printf("%d\n",tar);
        if(tries==0)
        printf("Congrats %s got it in %d TRIES!!\n", name, game(lim,tar));
        printf("\nTYPE 'again' TO PLAY AGAIN");
        fgets(play_again,sizeof(play_again),stdin);
        play_again[strlen(play_again)-1]='\0';
    }while(strcmp(play_again,"again")==0);
}

int game(int l,int t){

    int guess,tries=0,hint_count=0;

    // printf("%d\n",t);
    printf("Guess the number between 1 and %d:\n",l);
    while(guess!=t){
        tries++;
        scanf("%d",&guess);
        getchar();
        if(guess==290108){
            hints(t,&hint_count);
            tries--;
        }

        else if(guess==t-1 || guess==t+1)
        printf("The number is right next to this\n");
        else if(guess>t-8 && guess<t)
        printf("This number is little low:/\n");
        else if(guess<t-8 && guess>t)
        printf("This number is little high:/\n");
        else if(guess>t-15 && guess<t)
        printf("You're getting warmer, go lower!\n");
        else if(guess<t-15 && guess>t)
        printf("You're getting warmer, go higher!\n");
        else if(guess>t)
        printf("Aim lower!\n");
        else if(guess<t)
        printf("Aim higher!\n");
    }
    return tries;
}

void hints(int sec,int *p){
    char eo[100];

    if(*p<2){
        printf("You are being provided a hint ;)\n");
        switch(*p){
            case 0:
            (sec%2==0)?strcpy(eo,"EVEN"):strcpy(eo,"ODD");
            printf("The Number is %s.\n",eo);break;
            case 1:
            printf("The number starts with %d.\n",firstDigit(sec));break;
        }
        (*p)++;
    }
    else{
        printf("You ran out of hints\n");
    }
}

int firstDigit(int n){
    n = abs(n);

    while (n >= 10) {
        n /= 10;
    }

    return n;
}