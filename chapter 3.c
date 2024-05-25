#include<stdio.h>
#include<stdlib.h>

int result(){
    int sub1, sub2, sub3;
    float result;

    printf("\nEnter Marks of Maths : ");
    scanf("%d", &sub1);
    printf("\nEnter Marks of Science : ");
    scanf("%d", &sub2);
    printf("\nEnter Marks of English : ");
    scanf("%d", &sub3);

    result = (sub1+sub2+sub3)/3;

    if(sub1 <=100 || sub2 <=100 || sub3 <=100){
        if(result < 40 || sub1 < 33 || sub2 < 33 || sub3 < 33) {
            printf("Percentage : %.2f", result);
            printf("\nResult : Failed");
        }
        else {
            printf("Percentage : %.2f", result);
            printf("\nResult : Passed");
        }
    }
    else {
        printf("Enter marks out of 100");
    }
}

int tax() {
    int income;
    float tax;
    printf("\nEnter Income : ");
    scanf("%d", &income);

    if(income >= 250000 && income <= 500000) {
        tax = (income * 5)/100;
    }
    else if(income > 500000 && income <= 1000000) {
        tax = (income * 20)/100;
    }
    else if(income > 1000000) {
        tax = (income * 30)/100;
    }

    printf("Tax = %.2f", tax);
}

int leap() {
    int year;
    printf("Enter Year : ");
    scanf("%d", &year);

    if(year%4 == 0 && year%100 != 0) {
        printf("%d is a leap year", year);
    }
    else {
        printf("%d is not a leap year", year);
    }
}

int greatest() {
    int i, n[4];
    
    for(i=0;i<4;i++) {
        printf("Enter Number %d : ", i+1);
        scanf("%d", &n[i]);
    }

    if(n[0] > n[1] && n[0] > n[2] && n[0] > n[3]){
        printf("\n%d is the greatest number", n[0]);
    }
    else if(n[1] > n[0] && n[1] > n[2] && n[1] > n[3]){
        printf("\n%d is the greatest number", n[1]);
    }
    else if(n[2] > n[0] && n[2] > n[1] && n[2] > n[3]){
        printf("\n%d is the greatest number", n[2]);
    }
    else if(n[3] > n[0] && n[3] > n[1] && n[3] > n[2]){
        printf("\n%d is the greatest number", n[3]);
    }
}

int checkcharacter() {
    char value;
    printf("Enter Value : ");
    scanf("%c", &value);
    if(value>='a' && value<='z'){ //if(value=>97 && value<=122)
        printf("It is lowercase");
    }
    else if(value>='A' && value<='Z'){ //if(value=>65 && value<=122)
        printf("It is uppercase");
    }
    else if(value>=0 && value<=9){
        printf("It is a number");
    }
    else {
        printf("It is a special character");
    }
}

int main(){
    int ch;
    printf("\n\n-------Menu-------");
    printf("\n1. Check Result");
    printf("\n2. Count Tax");
    printf("\n3. Check Leap Year");
    printf("\n4. Find Greatest Number");
    printf("\n5. Check Character"); //Without inbuilt functions
    printf("\n0. Exit\n");
    printf("\nEnter your choice : ");
    scanf("\n%d", &ch);

    switch(ch){
        case 1:
        result();
        main();
        
        case 2:
        tax();
        main();

        case 3:
        leap();
        main();

        case 4:
        greatest();
        main();

        case 0:
        exit(0);
        
        default:
        printf("\nInvalid Choice!");
        main();
    }
    return 0;
}