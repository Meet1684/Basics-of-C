#include<stdio.h>
#include<string.h>

int main(){
    char ptr1[10] = "Harry"; // char *ptr = "Harry";
    printf("%s\n", ptr1);
    char name[20];
    printf("Enter Name : ");
    gets(name);
    printf("Your name is %s", name);
    puts(name);
    printf("\n*******************************\n");
    char *ptr2 = "Harry";
    ptr2 = "Meet";
    printf("New Assigned value : %s", ptr2);

    // char []ptr = "Harry";
    // ptr = "Meet"; // WIll throw error
    printf("\n*******************************\n");
    printf("\nLength is : %d", strlen(ptr2));

    char new[10];
    strcpy(new, ptr1);
    printf("\nCopied String %s\n", new);

    char *s1 = "Bhai";
    printf("\n%s\n", strcat(ptr1, s1));
    return 0;
}