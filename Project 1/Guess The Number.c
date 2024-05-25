#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int play();
int score(int ps, int tguess, int tgames);
int scoreboard();
int save_score(char n[20], int ps, int tguess, int tgames);
int Player_Score = 0;
int total_guess = 0;
int total_games = 0;
char name[20];

void menu(){
    int ch;
    printf("\n****************Main Menu****************\n");
    printf("\n1. Start Game");
    printf("\n2. Your Score");
    printf("\n3. Scoreboard");
    printf("\n4. Exit Game\n");
    printf("\n\nSelect any option :");
    scanf("%d", &ch);

    switch(ch){

    case 1:
    play();
    menu();
    break;

    case 2:
    score(Player_Score, total_guess, total_games);
    menu();
    break;

    case 3:
    scoreboard();
    menu();
    break;

    case 4:
    printf("\nExiting...");
    save_score(name, Player_Score, total_guess, total_games);
    exit(0);

    default:
    printf("\nInvalid Choice !\n");
    menu();
    }
}

int play(){
    srand(time(NULL));
    int ran_num = rand()%100 +1;
    int num;
    do{
        printf("\nGuess the number : ");
        scanf("%d", &num);
        if(num < ran_num){
            printf("\nLower than the actual number\n");
        }
        else if(num > ran_num){
            printf("\nHigher than the actual number\n");
        }
        total_guess = total_guess + 1;
    }while(num!=ran_num);
    int Current_Score = abs((total_guess*2)-100);
    Player_Score = Player_Score + Current_Score; 
    printf("\n-----*****Your guess is Correct !*****-----\n");
    printf("\n-----*****Your Current Score : %d*****-----\n", Current_Score);
    printf("\n-----*****Your Total Score : %d*****-----\n", Player_Score);
    total_games = total_games + 1;
    return Player_Score, total_guess;
}

int score(int ps, int tguess, int tgames){
    printf("\nTotal Games : %d", tgames);
    printf("\nYour Score : %d", ps);
    printf("\nTotal Guess : %d", tguess);
}

int save_score(char n[20], int ps, int tguess, int tgames){
    FILE *ptr = fopen("Scoreboard.txt", "r");
    if(ptr == NULL){
        FILE *ptr = fopen("Scoreboard.txt", "w+");
        fprintf(ptr, "******************Guess The Number********************\n");
        fclose(ptr);
    }
    ptr = fopen("Scoreboard.txt", "a");
    fprintf(ptr, "\nName : %s\n", n);
    fprintf(ptr, "Total Games : %d\n", tgames);
    fprintf(ptr, "Score : %d\n", ps);
    fprintf(ptr, "Total Guess : %d\n", tguess);
    fclose(ptr);
    return 0;
}

int scoreboard(){
    FILE *ptr = fopen("Scoreboard.txt", "r");
    if(ptr == NULL){
        printf("\nEmpty Scoreboard\n");
    }
    else{
        printf("\nFetching Scoreboard...\n");
        char c = fgetc(ptr);
        while(c!=EOF){
            printf("%c", c);
            c = fgetc(ptr);
        }
    }
    fclose(ptr);
}

int main(){
    printf("\nEnter Name : ");
    scanf("%s", &name);
    menu();
    return 0;
}