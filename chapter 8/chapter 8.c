#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void input(){
    char st1[30];
    char st2[30];
    char c;
    int i=0;
    
    printf("Enter the first string: ");
    scanf("%s", st1);
    printf("\nEnter the second string character by character\n: ");

    while(c!='\n'){
        fflush(stdin);
        scanf("%c", &c);
        st2[i]=c;
        i++;
    }
    st2[i-1]='\0';

    printf("\nThe value of first string is : %s", st1);
    printf("\nThe value of second string is : %s", st2);
}

int length(char str[]){
    int len = 0;
    char *ptr = str;
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    return len;
}

int slice(char *st, int m, int n){
    int i = 0;
    while((m+i)<n){
        st[i] = st[i+m];
        i++;
    }
    st[i] = '\0';
}

void encrypt(char *st){
    char *ptr = st;
    while(*ptr!='\0'){
        *ptr = *ptr + 1;
        ptr++;
    }
}

void decrypt(char *st){
    char *ptr = st;
    while(*ptr!='\0'){
        *ptr = *ptr - 1;
        ptr++;
    }
}

int occurence(char *st, char c){
    char *ptr = st;
    int char_count = 0;
    while(*ptr!='\0'){
        if(*ptr == c){
            char_count++;
        }
        ptr++;
    }
    return char_count;
}

int check_char(char *st, char c){
    char *ptr = st;
    while(*ptr!='\0'){
        if(*ptr == c){
            printf("\n'%c' is present in String \"%s\"\n", c, st);
        }
        ptr++;
    }
}

int main(){
    int n = length("Hi");
    printf("\nLength of \"Hi\" is : %d", n);

    char st[] = "abcdefgh";
    slice(st, 1, 4);
    printf("\n%s\n", st);

    char c[] = "Let's go";
    encrypt(c);
    printf("\nEntrypted : %s\n", c);
    decrypt(c);
    printf("\nDecrypted : %s\n", c);

    int count_e = occurence(c, 's');
    printf("\noccurence of s in \"%s\" is %d\n", c, count_e);

    check_char(c, 'e');
    return 0;
}