#include<stdio.h>
#include<stdlib.h>

int mul_Table(){
    int num, i, ans;
    printf("\nEnter Number : ");
    scanf("%d",&num);

    for(i=0; i<=9; i++) {
        ans = num*(i+1);
        printf("\n%d * %d = %d", num, (i+1), ans);
    }
}

int rev_mul_Table(){
    int num, i, ans;
    printf("\nEnter Number : ");
    scanf("%d",&num);

    for(i=9; i>=0; i--) {
        ans = num*(i+1);
        printf("\n%d * %d = %d", num, (i+1), ans);
    }
}

int sumofN(){
    int num, sum=0, i;
    printf("Enter Number : ");
    scanf("%d", &num);

    for(i=1; i<=num; i++) {
        sum += i; // sum = sum + i
    }
    printf("\nSum = %d", sum);
}

int sumofn(){
    int num, sum=0, i=1;
    printf("Enter Number : ");
    scanf("%d", &num);
    while(i<=num) {
        sum += i; // sum = sum + i
        i++;
    }
    printf("\nSum = %d", sum);
}

int factorial(){
    int i, num, fact=1;
    printf("Enter Number : ");
    scanf("%d", &num);

    for(i=1; i<=num;i++){
        fact*=i; //fact = fact * i
    }
    printf("\nFactorial is %d", fact);
}

int prime() {
    int i, num, flag=0;
    printf("Enter Number : ");
    scanf("%d", &num);
    if(num<=1){
        flag++;
    }
    else{
        for(i=2; i<=num/2; i++){ //for(i=2; i<sqrt(num); i++)
            if(num%i==0){
                flag++;
            }
        }

        // i=2;
        // while(i<=num/2){ //while(i<=sqrt(num))
        //     if(num%i==0){
        //         flag++;
        //     }
        //     i++;
        // }
    }

    if(flag==0){
        printf("%d is a prime number", num);
    }
    else{
        printf("%d is not a prime number", num);
    }
}

int main(){
    int ch;
    printf("\n\n-------Menu-------");
    printf("\n1. Multiplication Table");
    printf("\n2. Reverse Multiplication Table");
    printf("\n3. Sum of first 'N' numbers");
    printf("\n4. Factorial");
    printf("\n5. Prime");
    printf("\n0. Exit");
    printf("\nEnter your choice : ");
    scanf("%d", &ch);

    switch(ch){
        case 1:
        mul_Table();
        main();
        
        case 2:
        rev_mul_Table();
        main();

        case 3:
        sumofn();
        main();

        case 4:
        factorial();
        main();

        case 5:
        prime();
        main();

        case 0:
        exit(0);
        
        default:
        printf("\nInvalid Choice!");
        main();
    }
    return 0;
}