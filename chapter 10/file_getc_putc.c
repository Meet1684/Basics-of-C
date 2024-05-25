#include<stdio.h>

void read1(){
    FILE *ptr = fopen("New_File.txt", "r");
    printf("\n***************Printing characters one by one***************\n");
    char c = fgetc(ptr);
    while(c!=EOF){
        printf("%c", c);
        c = fgetc(ptr);
    }
    printf("\n");
    fclose(ptr);
}

void write1(){
    FILE *ptr = fopen("New_File.txt", "a+");
    char c;
    int i;
    printf("\nEnter the character you want to write(Append) : ");
    scanf("%c", &c);
    putc(c, ptr);
    fclose(ptr);
}

void read2(){
    FILE *ptr = fopen("New_File.txt", "r");
    char s[100];
    printf("\nReading File Content...\n");
    fgets(s, 100, ptr);
    printf("\n%s", s);
}

void write2(){
    FILE *ptr;
    char s[100];
    int ch;
    printf("\nChoose option");
    printf("\n1. Append");
    printf("\n2. Write\n");
    scanf("%d", &ch);
    if(ch==1){
        ptr = fopen("New_File.txt", "a");
    }
    else if(ch==2){
        ptr = fopen("New_File.txt", "w");
    }
    else{
        printf("\nInvalid Choice !");
    }
    fflush(stdin);
    printf("\nEnter String\n");
    scanf("%s", &s);
    if (fputs(s, ptr) != EOF) {
        printf("Successfully wrote to file\n");
    } else {
        printf("Failed to write to file\n");
    }
}

int main(){
    read1();
    write1();
    read2();
    write2();
    return 0;
}