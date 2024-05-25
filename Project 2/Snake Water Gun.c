#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int play();
int score(int ps, int cs);
int scoreboard();
int save_score(char n[20], int ps, int cs);
int Player_Score = 0;
int CPU_Score = 0;
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
    score(Player_Score, CPU_Score);
    menu();
    break;

    case 3:
    scoreboard();
    menu();
    break;

    case 4:
    printf("\nExiting...");
    save_score(name, Player_Score, CPU_Score);
    exit(0);

    default:
    printf("\nInvalid Choice !\n");
    menu();
    }
}

int play(){
    char Player_Choice, CPU_Choice;
    char c[3] = {'s', 'w', 'g'};
    while (getchar() != '\n');
    printf("\n\nSnake(s) Water(w) Gun(g)(Enter 'E' to exit)\n");
    printf("\nEnter your choice :");
    scanf("%c", &Player_Choice);
    // while (getchar() != '\n');
    srand(time(NULL));
    CPU_Choice = c[rand() % 3];

    if(Player_Choice == 's' && CPU_Choice == 'g' ||
       Player_Choice == 'g' && CPU_Choice == 'w' ||
       Player_Choice == 'w' && CPU_Choice == 's') {
        CPU_Score = CPU_Score + 1;
        printf("\n\nCPU chose %c", CPU_Choice);
        printf("\n***********You Lose************\n");
        printf("\nScore : %d", Player_Score);
        play();
    } else if(Player_Choice == 's' && CPU_Choice == 'w' ||
              Player_Choice == 'g' && CPU_Choice == 's' ||
              Player_Choice == 'w' && CPU_Choice == 'g') {
        Player_Score = Player_Score + 1;
        printf("\n\nCPU chose %c", CPU_Choice);
        printf("\n***********You Win !************\n");
        printf("\nScore : %d", Player_Score);
        play();
    } else if(Player_Choice == CPU_Choice){
        printf("\n\nCPU chose %c", CPU_Choice);
        printf("\n***********Draw************\n");
        play();
    } else if(Player_Choice == 'e' || Player_Choice == 'E'){
        menu();
        printf("\nScore : %d", Player_Score);
        printf("\nCPU Score : %d", CPU_Score);
    }
    else {
        printf("\n\nInvalid Choice !");
        play();
    }
    return Player_Score, CPU_Score;
}

int score(int ps, int cs){
    printf("\nYour Score : %d", ps);
    printf("\nCPU Score : %d", cs);
}

int save_score(char n[20], int ps, int cs){
    FILE *ptr = fopen("Scoreboard.txt", "r");
    if(ptr == NULL){
        FILE *ptr = fopen("Scoreboard.txt", "w+");
        fprintf(ptr, "******************Snake Water Gun********************\n");
        fclose(ptr);
    }
    ptr = fopen("Scoreboard.txt", "a");
    fprintf(ptr, "\nName : %s\n", n);
    fprintf(ptr, "Score : %d-%d\n", ps, cs);
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